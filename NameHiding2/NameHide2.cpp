#include <iostream>
using namespace std;

class A
{
public:
    void f(int x)
    {
        cout << "A::f(int)" << x << endl;
    }
}

class B : public A
{
public:
    // 기초 클래스의 f함수를 숨긴다.
    void f(double x)
    {
        cout << "B::f(double)" << x << endl;
    }
}

int main() {
    B objB;
    objB.f(10.0);
    objB.f(20);
    return 0;
}