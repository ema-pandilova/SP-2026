//
// Created by ema on 10.11.26.
//
#include <iostream>
using namespace std;

// Да се напише програма што ќе ги отпечати сите парови прости броеви помали од 1000 што се разликуваат меѓу себе за 2. На крај да се отпечати и нивниот број.

int isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int counter = 0;
    for (int i = 1; i < 998; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            cout << i << " " << i + 2 << endl;
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
