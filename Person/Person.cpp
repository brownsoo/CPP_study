#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person(const char* name, const char* addr) 
{
    // assign memory for name
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
    this->addr = new char[strlen(addr) + 1];
    strcpy(this->addr, addr);
}

Person::~Person() 
{
    cout << "Pserson 제거(" << name << ")" << endl;
    delete []name;
    delete []addr;
}

void Person::print() const 
{
    cout << addr << "에 사는 " << name << "입니다." << endl;
}

void Person::chAddr(const char* newAddr) 
{
   addr = new char[strlen(newAddr)+1];
   strcpy(addr, newAddr);
}