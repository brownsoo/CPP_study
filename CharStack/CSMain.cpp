#include <iostream>
#include "CharStack.h"

using namespace std;

int main()
{
    CharStack chStack;
    char str[20];
    cout << "영어 단어를 입력 : ";
    cin >> str;
    
    char* pt = str;
    while(*pt) {
        chStack.push(*(pt++));
    }
    cout << "역순으로 출력 : ";
    while(!chStack.chkEmpty()) {
        cout << chStack.pop();
    }   
    cout << endl;
    return 0;
}