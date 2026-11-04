//
// Created by ema on 1.11.26.
//
#include <iostream>
using namespace std;

// Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура ќе го определи бројот со максимална вредност.
// Програмата завршува ако се внесе невалидна репрезентација на број.

int main() {
    int n;
    int max;
    int flag = 1;
    // cin>>max;
    while (cin >> n) {
        if (flag) {
            max = n;
            flag = 0;
        }
        if (max < n) {
            max = n;
        }
    }
    cout << max << endl;
    return 0;
}
