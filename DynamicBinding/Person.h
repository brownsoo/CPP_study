#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name;

public:
    Person(const string &n) : name(n) {}
    
    // 가상함수 소멸자로 선언해야 하위 클래스의 소멸자가 호출된다.
    virtual ~Person() {
        cout << "Person destructor called" << endl;
    }

    void setName(const string &n)
    {
        name = n;
    }

    string getName() const { return name; }

    // 가상 함수로 선언 
    virtual void print() const
    {
        cout << name;
    }
};

#endif