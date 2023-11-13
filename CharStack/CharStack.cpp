#include <iostream>
#include "CharStack.h"
using namespace std;

bool CharStack::push(char ch) 
{
    if (chkFull()) {
        cout << "Stack is full" << endl;
        return false;
    }
    else {
        buf[--top] = ch;
        return true;
    }    
}

char CharStack::pop()
{
    if (chkEmpty()) {
        cout << "Stack is empty" << endl;
        return 0;
    }
    else {
        return buf[top++];
    }
}