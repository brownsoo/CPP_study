#ifndef VECF_H
#define VECF_H

#include <iostream>
#include <cstring>
using namespace std;

class VecF
{
private:
    int n;
    float* arr;
public:
    VecF(int d, const float* a=nullptr): n{d} {
        arr = new float[d];
        if (a) memcpy(arr, a, sizeof(float) * d);
    }
    // 깊은 복사 
    // VecF(const VecF& fv) : n { fv.n } {
    //     arr = new float[n];
    //     memcpy(arr, fv.arr, sizeof(float)*n);
    // }
    // 이동 생성자
    VecF(VecF&& fv) : n{fv.n}, arr{fv.arr} {
        fv.arr = nullptr;
        fv.n = 0;
    }
    // 위임 생성자 
    VecF(const VecF& fv) : VecF(fv.n, fv.arr) {}
    
    // 초기화 리스트 생성자 
    VecF(initializer_list<float> lst) : n{ static_cast<int>(lst.size()) } {
        arr = new float[n];
        copy(lst.begin(), lst.end(), arr);
    }
    
    ~VecF() {
        delete[] arr;
    }
    
    VecF add(const VecF& fv) const {
        VecF tmp(n);
        for(int i=0; i<n; i++)
            tmp.arr[i] = arr[i] + fv.arr[i];
            
        return tmp;
    }
    
    void print() const {
        cout << "[ ";
        for (int i=0; i<n; i++)
            cout << arr[i] << " ";
        cout << "]";
    }
    
    // 출력 연산자 다중 정의
    // private 속성을 접근하기 위해 friend 선언
    friend ostream& operator<<(ostream& os, const VecF& fv) {
        os << "[ ";
        for (int i=0; i<fv.n; i++)
            os << fv.arr[i] << " ";
        os << "]";
        return os;
    }
    
    // 대입 다중 정의
    VecF& operator=(const VecF& fv) {
        if (n != fv.n) {
            delete[] arr;
            arr = new float[n = fv.n];
        }
        memcpy(arr, fv.arr, sizeof(float) * n);
        return *this;
    }
    
    // 이동 대입 연산자 
    VecF& operator=(VecF&& fv) {
        delete[] arr;
        n = fv.n;
        arr = fv.arr;
        fv.arr = nullptr;
        return *this;
    }
};

#endif