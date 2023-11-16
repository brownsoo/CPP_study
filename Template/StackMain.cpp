#include <iostream>
#include "StackT.h"

using namespace std;

int main()
{
    Stack<char> sc(100);
    sc.push('a');
    sc.push('b');
    cout << "char stack : ";
    while (!sc.empty())
        cout << sc.pop() << " ";
    cout << endl;

    Stack<int> si(100);
    si.push(1);
    si.push(10);
    si.push(10 + 10);
    cout << "int stack : ";
    while (!si.empty())
        cout << si.pop() << " ";
    cout << endl;
    
    // Stack<MyString> ss(100);
    // MyString s1("Hello");
    // MyString s2("World");
    // MyString s3("CS");
    // ss.push(s1);
    // ss.push(s2 + s3);
    // cout << "MyString stack : ";
    // while (!ss.empty())
    //     cout << ss.pop() << " ";
    // cout << endl;
}