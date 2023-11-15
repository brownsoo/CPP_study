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

    void setName(const string &n)
    {
        name = n;
    }

    string getName() const { return name; }

    void print() const
    {
        cout << name;
    }
};

#endif