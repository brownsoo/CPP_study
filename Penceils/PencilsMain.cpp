#include <iostream>
#include "Pencils.h"

int main() 
{
    Pencils p1(5, 7);
    Pencils p2(23);
    
    p1.display();
    (++p1).display();
    p1.display();
}