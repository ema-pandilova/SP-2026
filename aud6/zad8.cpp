//
// Created by ema on 10.11.26.
//
#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int n;
    cin >> n;
    int number;
    int prev = 0;
    for(int i=0; i<n; i++) {
        cin>>number;
        if(number%3==0) {
            cout<<number/3<<endl;
        }
        else if(number%3==1) {
            cout<<number+prev<<endl;
        }
        else {
            cout<<number*2<<endl;
        }
        prev = number;

    }
}