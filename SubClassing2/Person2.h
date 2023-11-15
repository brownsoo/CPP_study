#ifndef PERSON2_H
#define PERSON2_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name;

public:
    Person(const string &n)
    {
        cout << "Person constructor called" << endl;
        name = n;
    }
    ~Person()
    {
        cout << "Person destructor called" << endl;
    }

    void setName(const string &n) { name = n; }

    string getName() const { return name; }

    void print() const
    {
        cout << name;
    }
};

#endif