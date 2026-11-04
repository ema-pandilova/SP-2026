//
// Created by ema on 1.11.26.
//
#include <iostream>
using namespace std;


//Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура
//ќе ги определи двата броја со најголеми вредности.
//Програмата завршува ако се внесе невалидна репрезентација на број.
// 2 4 7 4 2 1 8 6 9 7 10 3

int main() {
    int max1, max2, n;
    if (cin >> max1 >> max2) {
        if (max1 < max2) {
            int temp = max2;
            max2 = max1;
            max1 = temp;
        }
    }
    while (cin >> n) {
        if (n > max1) {
            max2 = max1;
            max1 = n;
        } else if (n > max2) {
            max2 = n;
        }
    }
    cout << max1 << " " << max2 << endl;
    return 0;
}
