//
// Created by ema on 20.10.26.
//
#include <iostream>
using namespace std;

//Да се напише програма што за внесен број на поени од испит ќе
//генерира соодветна оценка според следната табела:
// (0, 50) 5/
// [50, 60) 6
// [60, 70) 7
// [70, 80) 8
// [80, 90) 9
// [90, 100) 10

int main() {
    int points;
    cin >> points;
    int grade;

    if (points >= 0 && points <= 100) {
        if (points > 90) {
            grade = 10;
        } else if (points > 80) {
            grade = 9;
        } else if (points > 70) {
            grade = 8;
        } else if (points > 60) {
            grade = 7;
        } else if (points > 50) {
            grade = 6;
        } else {
            grade = 5;
        }
    } else {
        cout << "Invalid Input" << endl;
    }
    // Да се напише програма што за внесен број на поени од испит ќе генерира соодветна оценка според следната табела:
    // Да се промени претходната програма, така што покрај оценките ќе се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:

    int pt = points % 10;
    if (grade != 5 && (pt == 1 || pt == 2 || pt == 3)) {
        cout << grade << "-" << endl;
    } else if ((grade != 5 && grade != 10) && (pt == 8 || pt == 9 || pt == 0)) {
        cout << grade << "+" << endl;
    } else {
        cout << grade << endl;
    }

    //50-59 6
    //60-69 7
    //70-79 8
    //80-89 9
    //90-100 10

    // int points;
    // cin >> points;
    //
    // int digit = points / 10;
    //
    // if(digit>=10) {
    //     digit=9;
    // }
    // if(digit<4) {
    //     digit=4;
    // }
    //
    // cout<<digit+1<<endl;
}
