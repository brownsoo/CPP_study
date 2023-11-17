#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> p1{new int};
    unique_ptr<int> p2;
    *p1 = 10;
    cout << *p1 << endl;
    p2 = std::move(p1);
    cout << *p2 << endl;
    p2 = nullptr;
    return 0;
}