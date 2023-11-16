#include <iostream>
#include "SwapFunc.h"

using namespace std;

int main() {
    int x = 10, y = 20;
    cout << "x = " << x << ", y = " << y << endl;
    swapFT(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}