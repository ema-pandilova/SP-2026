//
// Created by ema on 1.11.26.
//
#include <iostream>
using namespace std;

// Да се напише програма што на екран ќе ги испечати сите четири-цифрени броеви кај кои збирот на трите најмалку значајни цифри е еднаков со најзначајната цифра.

int main() {
    // int i;
    // for(i=1000; i<=9999; i++) {
    //     if(i/1000 == (i%10 + i/10%10 + i/100%10)) {
    //         cout << i << endl;
    //     }
    // }
    // namesto cetiricifreni broevi koristime broevi koi pripagjaat na zadaden opseg
    int n, m;
    cin >> n >> m;
    int lead; //najznacajna cifra
    int sum = 0;

    for (int i = n; i <= m; i++) {
        int temp = i;
        while (temp >= 10) {
            temp /= 10;
        }
        lead = temp;
        sum = 0;
        int temp2 = i;
        // algoritam za presmetuvanje suma na cifri na broj
        while (temp2 > 0) {
            sum += temp2 % 10;
            temp2 /= 10;
        }

        if (lead == sum - lead) {
            cout << i << endl;
        }
    }
    return 0;
}
