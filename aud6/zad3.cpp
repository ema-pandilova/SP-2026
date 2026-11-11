//
// Created by ema on 10.11.26.
//
#include <iostream>
using namespace std;

// Да се напише програма која за даден природен број ја пресметува разликата помеѓу најблискиот поголем од него прост број и самиот тој број.
// 577 – 573 = 4

int daliProst(int x) {
    for (int i = 2; i <= x - 1; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;
    for (int i = n + 1; ; i++) {
        if (daliProst(i)) {
            cout << i - n << endl;
            break;
        }
    }
    return 0;
}
