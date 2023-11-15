#ifndef STUDENT2_H
#define STUDENT2_H
#include <iostream>
#include <string>
#include "Person2.h"

class Student : public Person
{
    string school;

public:
    Student(const string &n, const string &s) : Person(n)
    {
        cout << "Student constructor called" << endl;
        school = s;
    }

    ~Student()
    {
        cout << "Student destructor called" << endl;
    }

    void setSchool(const string &s) { school = s; }

    string getSchool() const { return school; }

    void print() const
    {
        Person::print();
        cout << " goes to " << school;
    }
};

#endif