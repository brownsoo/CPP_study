#include <iostream>
#include "../VecF.h"

using namespace std;

// void swapVecF(VecF& v1, VecF& v2) {
//     VecF tmp = move(v1);
//     v1 = move(v2);
//     v2 = move(tmp);
// }

int main() {
    float a[3] = { 1, 2, 3 };
    float b[3] = { 2, 4, 6};
    VecF v1(3, a);
    VecF v2(3, b);
    VecF v3(3);
    
    v3 = v1; // 대입 연산자 
    v3.print();
    
    v3 = v1.add(v2); // 이동 대입 연산자 
    cout << v1 << " + " << v2 << " = ";
    cout << v3 << endl;
    return 0;
}