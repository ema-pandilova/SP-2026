//
// Created by ema on 1.11.26.
//
#include <iostream>
using namespace std;

// Да се напише програма што за знак внесен од тастатура ќе одреди дали е самогласка, цифра или другo.

int main() {
    char c;
    cin >> c;
    switch (c) {
        case 'A':
        case 'U':
        case 'I':
        case 'O':
        case 'E':
        case 'a':
        case 'u':
        case 'i':
        case 'o':
        case 'e':
            cout << "Samoglaska" << endl;
            break;
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            cout << "Cifra" << endl;
            break;
        default:
            cout << "nesto drugo" << endl;
            break;
    }
    return 0;
}
