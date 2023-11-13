#include <iostream>
#include "../VecF.h"

using namespace std;

int main() {
    float a[3] = { 1, 2, 3 };
    VecF v1(3, a); // 1,2,3을 저장하는 벡터 
    // v1을 복사하여 v2를 만듦 
    // 묵시적 생성자를 사용한다면(얕은 복사), v1 배열 arr과 같은 포인터를 가리킨다.
    VecF v2(v1); 
    // 이동 생성자 호출 
    VecF v3(v1.add(v2));
    v1.print();
    cout << endl;
    v2.print();
    cout << endl;
    v3.print();
    cout << endl;
    
    VecF v4{ 1.f, 2.f, 3.f };
    v4.print();
    cout << endl;
    
    return 0;
}