//
// Created by ema on 1.11.26.
//

#include <iostream>
using namespace std;
#include <cmath>

// Да се напише програма што од N цели броеви внесени од тастатура ќе ја определи разликата од сумите на броевите на парни и непарни позиции (според редоследот на внесување).
// Ако оваа разлика е помала од 10 на екран се печати “Dvete sumi se slicni”, а во спротивно “Dvete sumi mnogu se razlikuvaat”.
// 2 4 3 4 2 1 1 6 1 7

int main() {
    int n;
    cin >> n;
    int sum_odd_positions = 0, sum_even_positions = 0;
    int number;
    for (int i = 1; i <= n; i++) {
        cin >> number;
        if (i % 2 == 0) {
            sum_even_positions += number;
        } else {
            sum_odd_positions += number;
        }
    }
    cout << sum_odd_positions << endl;
    cout << sum_even_positions << endl;
    if (abs(sum_odd_positions - sum_even_positions) < 10) {
        cout << "Dvete sumi se slicni" << endl;
    } else {
        cout << "Dvete sumi mnogu se razlikuvaat" << endl;
    }
    return 0;
}
