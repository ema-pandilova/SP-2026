//
// Created by ema on 26.10.26.
//
#include<iostream>
using namespace std;

// Да се напише програма за пресметување на \$y = x^n\\$ за даден природен број n, n >= 1 и реален број x.

int main() {
    int n;
    float x, y = 1;
    cin >> n >> x;
    int temp = n;

    while (temp > 0) {
        y *= x;
        temp--;
    }

    cout << x << "^" << n << "=" << y << endl;
    return 0;
}
