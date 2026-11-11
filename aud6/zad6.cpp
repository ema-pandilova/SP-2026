//
// Created by ema on 10.11.26.
//
#include <iostream>
using namespace std;

//KOLOKVIUM 2024
// Од тастатура се внесуваат два позитивни едноцифрени различни броеви x и y. Потоа се внесува даден природен број N (каде N < 100,000), и после него се внесуваат N други природни броеви.
//
// За секој од внесените броеви да се провери дали завршуваат на цифрите x и y.
//
// Доколку бројот завршува на цифрите xx или yy, се печати бројот и пораката "Same digits".
// Доколку бројот завршува на цифрите xy или yx, се печати бројот и пораката "Different digits".
// Доколку бројот не завршува на цифрите x и y, се печати само бројот.

int main() {
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if ((num % 10 == x && num / 10 % 10 == x) || (num % 10 == y && num / 10 % 10 == y)) {
            cout << num << " Same digits" << endl;
        } else if ((num % 10 == x && num / 10 % 10 == y) || (num % 10 == y && num / 10 % 10 == x)) {
            cout << num << " Different digits" << endl;
        } else {
            cout << num << endl;
        }
    }
    return 0;
}
