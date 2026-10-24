//
// Created by ema on 20.10.26.
//

#include <iostream>
using namespace std;

int main() {
    int date;
    cin >> date;
    int day, month;
    day = date / 1000000;
    month = date / 10000 % 100;
    cout << day << "." << month;
    return 0;
}
