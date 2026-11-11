//
// Created by ema on 10.11.26.
//

#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << n << " " << sumOfDigits(n) << endl;
    return 0;
}
