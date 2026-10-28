//
// Created by ema on 26.10.26.
//
#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        cout << "Leap year" << endl;
    } else {
        cout << "Not a leap year" << endl;
    }
}
