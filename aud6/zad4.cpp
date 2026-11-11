//
// Created by ema on 10.11.26.
//
#include <iostream>
using namespace std;

// Да се напише програма што ќе ги отпечати сите прости броеви помали од 10000 чиј што збир на цифри е исто така прост број. На крајот да се отпечати колку вакви броеви се пронајдени.

int isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int sumOfDigits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
    int counter = 0;
    for (int i = 1; i < 10000; i++) {
        if (isPrime(i) && isPrime(sumOfDigits(i))) {
            cout << i << endl;
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
