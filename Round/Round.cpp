#include <iostream>
using namespace std;

double Round(double x, int d = 0);

int main() {
    cout << "1.234 의 2 반올림" << Round(1.234, 2) << endl;
    cout << "1.84 의 0 반올림" << Round(1.84) << endl;
    cout << "-1.84 의 1 반올림" << Round(-1.84, 1) << endl;
    cout << "-1.84 의 0 반올림" << Round(-1.84, 0) << endl;
    cout << "-1.44 의 0 반올림" << Round(-1.44) << endl;
    return 0;
}

/* 
x: 반올림 대상
d: 유지할 소숫점 자리 수 
 */
double Round(double x, int d) {
    double a = x >= 0 ? 0.5 : -0.5;
    double pow10 = pow(10, d);
    return trunc(x * pow10 + a) / pow10;
}