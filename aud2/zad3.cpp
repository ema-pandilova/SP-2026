//
// Created by ema on 13.10.26.
//

#include <iostream>
using namespace std;

int main() {
    float a = 5, b = 7.5, c = 10.2;
    float L = a + b + c;
    float s = L / 2;
    float P = s * (s - a) * (s - b) * (s - c);
    cout << "Perimetarot e: " << L << endl;
    cout << "Ploshtinata e: " << P << endl;
    return 0;
}
