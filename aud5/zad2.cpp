//
// Created by ema on 1.11.26.
//
#include <iostream>
using namespace std;

// Да се напише програма што ќе ги испечати сите броеви од зададен опсег кои се читаат исто и одлево надесно и оддесно налево.
int main() {
    // int n;
    // cin >> n;
    // int rev = 0;
    // int temp = n;
    //
    // // algoritam za prevrtuvanje na broj
    // while(temp>0) {
    //     int c = temp%10;
    //     rev = rev*10 + c;
    //     temp/=10;
    // }
    //
    // cout<<n<<" "<<rev<<endl;

    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = n; i <= m; i++) {
        int rev = 0;
        int temp = i;
        // algoritam za prevrtuvanje na broj
        while (temp > 0) {
            int c = temp % 10;
            rev = rev * 10 + c;
            temp /= 10;
        }
        if (i == rev) {
            cout << i << endl;
            count++;
        }
    }
    if (count == 0) {
        cout << "Nema palindromi" << endl;
    } else {
        cout << count << endl;
    }
    return 0;
}
