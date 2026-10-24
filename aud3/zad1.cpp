//
// Created by ema on 20.10.26.
//
#include <iostream>
using namespace std;

// Да се напише програма која чита знак од тастатура и во зависнот од тоа дали е мала или голема буква печати 1 или 0, соодветно.

int main() {
    char c;
    cin >> c;
    bool res;
    res = (c >= 'a' && c <= 'z');
    cout << res << endl;
    return 0;
}
