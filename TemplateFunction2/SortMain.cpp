#include <iostream>
#include "SortFunc.h"

using namespace std;

int main()
{
    int x[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    sortFT(x, 10);
    for (auto i : x)
        cout << i << " ";
    cout << endl;

    return 0;
}