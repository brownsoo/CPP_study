#include <iostream>
#include "SafeIntArray.h"
using namespace std;

int main()
 {
    SafeIntArray a(10);
    for (int i = 0; i < 10; i++)
        a[i] = i; // 변경을 위한 첨자 연산자 호출 
    cout << a[5] << endl; // 읽기만 위한 첨자 연산자 호출
    cout << a[11] << endl; // 범위를 벗어난 인덱스
    return 0;
 }