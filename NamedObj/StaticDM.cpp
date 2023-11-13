#include <iostream>
using namespace std;
#include "NamedObj.h"

void f() {
    NamedObj x("Third");
    x.display();
}

int main() {
    f();
    NamedObj c("Fourth");
    c.display();
    cout << "NamedObj instances count: " << NamedObj::nObj() << endl;
    return 0;
}