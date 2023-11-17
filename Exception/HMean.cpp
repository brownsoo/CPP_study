#include <iostream>
using namespace std;

double hmean(double a, double b) {
    if (a == -b)
    {
        throw "조화평균을 계산할 수 없어";
    }
    return 2.0 * a * b / (a + b);
}

int main() 
{
    double x, y, z;
    char cFlag = 'y';
    while (cFlag != 'n')
    {
        cout << "두 수를 입력하시오: ";
        cin >> x >> y;
        try {
            z = hmean(x, y);
            cout << "조화평균 = " << z << endl;
        } 
        catch(const char* s) {
            cout << s << endl;
        }
        cout << "계속하시겠습니까? (y/n): ";
        cin >> cFlag;
    }
    
}