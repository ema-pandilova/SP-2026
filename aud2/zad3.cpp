//
// Created by ema on 13.10.26.
//

#include <iostream>
using namespace std;

// Да се напише програма која за дадени страни на еден разностран триаголник ќе ги отпечати на екран периметарот и квадратот од плоштината (нека се работи со a = 5, b = 7.5, c = 10.2).

int main() {
    float a = 5, b = 7.5, c = 10.2;
    float L = a + b + c;
    float s = L / 2;
    float P = s * (s - a) * (s - b) * (s - c);
    cout << "Perimetarot e: " << L << endl;
    cout << "Ploshtinata e: " << P << endl;
    return 0;
}
