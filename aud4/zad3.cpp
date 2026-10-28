//
// Created by ema on 26.10.26.
//
#include<iostream>
using namespace std;

// Да се напише програма што од n броеви (внесени од тастатура) ќе го определи бројот на броеви што се деливи со 3, при делењето со 3 имаат остаток 1, односно 2.

int main() {
    int n;
    cin >> n;
    int number;
    int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++) {
        cin >> number;
        if (number % 3 == 0) {
            c0++;
        } else if (number % 3 == 1) {
            c1++;
        } else {
            c2++;
        }
    }
    cout << c0 << " " << c1 << " " << c2 << endl;
    return 0;
}
