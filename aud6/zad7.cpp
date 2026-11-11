//
// Created by ema on 10.11.26.
//
#include <iostream>
using namespace std;

//KOLOKVIUM 2024
// Од тастатура се внесува даден природен број N и после него се внесуваат N други природни броеви кои се од податочен тип long. За секој од внесените броеви да се определи дали истиот претставува репрезентација на збор и да се испечати буквата со најголем ASCII код (тоа е буквата најблиску до буквата Z). Зборот е составен од било кои големи букви и има најмалку 3 букви.
// Проверката на тоа дали бројот е репрезентација на збор, да се направи во посебна функција. ASCII кодот на првата голема буква 'А' е 65, а на последната голема буква 'Z' е 90
// Пример:
// 5
// 8380 не е репрезенатција на збор, зошто има 2 букви
// 84698384 е репрезенатција на зборот TEST (ASCII кодот за буквата T е 84, за E е 69 и за S е 83) со најголема буква T
// 7383808390 е репрезенатција на зборот ISPIZ, со најголема буква Z
// 108380 не е репрезентација на збор, зошто не е составен од сите букви
// 83800 не е репрезентација на збор

char is_letter(long number) {
    int counter = 0;
    char max_letter = 'A';
    while (number > 0) {
        int digit = number % 100;
        number /= 100;
        if (digit < 65 || digit > 90) {
            return 0;
        } else {
            counter++;
            if (digit > max_letter) {
                max_letter = digit;
            }
        }
    }
    if (counter < 3) {
        return 0;
    }
    return max_letter;
}

int main() {
    int n;
    cin >> n;
    long number;
    for (int i = 0; i < n; i++) {
        cin >> number;
        if (is_letter(number) != 0) {
            cout << number << " - YES - " << is_letter(number) << endl;
        } else {
            cout << number << " - NO" << endl;
        }
    }
    return 0;
}

// second solution

// void is_letter(long number) {
//     char max_letter = 'A';
//     int count = 0;
//     long temp = number;
//     int flag = 1;
//     while(temp > 0) {
//         int digits = temp % 100;
//         temp/= 100;
//         if(digits < 65 || digits > 90) {
//             flag = 0;
//             break;
//         }
//         else {
//             count++;
//             if(char(digits) > max_letter) {
//                 max_letter = char(digits);
//             }
//         }
//
//     }
//     if(count<3 || flag == 0) {
//         cout<<number<< " - NO"<<endl;
//     }
//     else {
//         cout<<number<<" - YES - "<<max_letter<<endl;
//     }
//
// }
//
// int main() {
//     int n;
//     cin>>n;
//     long number;
//     for(int i=0; i<n; i++) {
//         cin>>number;
//         is_letter(number);
//     }
//
// }
