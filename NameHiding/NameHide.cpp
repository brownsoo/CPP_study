#include <iostream>
using namespace std;

void f(int x) {
    cout << "f(int)" << x << endl;
}

void f(const char* x) {
    cout << "f(const char*)" << x << endl;
}

int main() {
    void f(int x); // f함수를 재선언함으로써 문자를 받는 f함수를 숨긴다.
    f(10);
    // f("hello"); // 오류 발생
    ::f("world");
}