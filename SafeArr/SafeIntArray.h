#ifndef SAFEINTARRAY_H
#define SAFEINTARRAY_H

#include <iostream>

class SafeIntArray {
    int limit;
    int *arr;
public:
    SafeIntArray(int n) : limit(n) {
        arr = new int[n];
    }
    ~SafeIntArray() {
        delete[] arr;
    }
    int size() const { return limit; }
    
    // i번 원소를 반환하는 멤버함수 
    int& operator[](int i) {
        if (i < 0 || i >= limit) {
            std::cout << "범위를 벗어난 인덱스: " << i << std::endl;
            exit(EXIT_FAILURE);
        }
        return arr[i];
    }
    int operator[](int i) const {
        if (i < 0 || i >= limit) {
            std::cout << "범위를 벗어난 인덱스: " << i << std::endl;
            exit(EXIT_FAILURE);
        }
        return arr[i];
    }
};

#endif