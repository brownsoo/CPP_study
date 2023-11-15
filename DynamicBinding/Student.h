#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include "Person.h"

class Student : public Person
{
    string school;

public:

    Student(const string &n, const string &s) : Person(n), school(s) {}
    
    ~Student() {
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