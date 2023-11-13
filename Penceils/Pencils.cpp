#include <iostream>
#include "Pencils.h"
using namespace std;

Pencils& Pencils::operator++() {
    if (++np == 12) {
        np = 0;
        ++dozens;
    }
    return *this;
}

Pencils Pencils::operator++(int) {
    Pencils tmp(*this);
    if (++np == 12) {
        np = 0;
        ++dozens;
    }
    return tmp;
}

void Pencils::display() const 
{
    if (dozens) {
        cout << dozens << "다스";
        if (np)
            cout << " " << np << "자루";
    }
    else {
        cout << np << "자루";
    }
}