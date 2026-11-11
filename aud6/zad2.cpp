//
// Created by ema on 10.11.26.
//
#include <iostream>
using namespace std;

// Да се напише програма која што ќе ги отпечати сите четирицифрени природни броеви кои се
// деливи со збирот на двата броја составени од првите две цифри и од последните две цифри на четирицифрениот број.
// На крајот треба да отпечати и колку вакви броеви се пронајдени.

int sumOfNumbers(int n) {
    return n / 100 + n % 100;
}

int main() {
    int i;
    int counter = 0;
    for (i = 1000; i <= 9999; i++) {
        if (i % sumOfNumbers(i) == 0) {
            cout << i << endl;
            counter++;
        }
    }
    cout << counter << endl;
}
