#ifndef SWAPFUNC_H
#define SWAPFUNC_H
#include <utility>

using namespace std;

template <typename ANY>
void swapFT(ANY &a, ANY &b)
{
    ANY tmp = std::move(a);
    a = std::move(b);
    b = std::move(tmp);
}
#endif