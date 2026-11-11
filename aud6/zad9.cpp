//
// Created by ema on 10.11.26.
//
#include <iostream>
using namespace std;
#include <cmath>

int transform(int a, int b, int k) {
    int komb = 0;
    int stepen = 1;
    while(a>0 || b>0 || k>0) {
        int aCifra = a%10;
        int bCifra = b%10;
        int kCifra = k%10;
        int result = abs(aCifra - bCifra);
        if(result < kCifra) {
            komb = aCifra * stepen;
        }
        else if (result > kCifra) {
            komb = bCifra * stepen;
        }

        if(result!=kCifra) {
            stepen*=10;;
        }
        a=a/10;
        b=b/10;
        k=k/10;
    }
    return komb;
}

int main() {
    int a,b,k;
    while(cin>>a>>b>>k) {
        int kombiniran = transform(a,b,k);
        cout<<kombiniran<<endl;
    }
}