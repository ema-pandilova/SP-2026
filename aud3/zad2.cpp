//
// Created by ema on 20.10.26.
//

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // if (x>0 && y>0) {
    //     cout<<"I kvadrant"<<endl;
    // }
    // else if (x<0 && y>0) {
    //     cout<<"II kvadrant"<<endl;
    // }
    // else if (x<0 && y<0) {
    //     cout<<"III kvadrant"<<endl;
    // }
    // else if (x>0 && y<0) {
    //     cout<<"IV kvadrant"<<endl;
    // }
    // else if (x==0 && y!=0) {
    //     cout<<"lezi na y oska"<<endl;
    // }
    // else if (y==0 && x!=0) {
    //     cout<<"lezi na x oska"<<endl;
    // }
    // else {
    //     cout<<"koordinaten pocetok"<<endl;
    // }

    if (x > 0) {
        if (y > 0) {
            cout << "I kvadrant" << endl;
        } else if (y < 0) {
            cout << "IV kvadrant" << endl;
        } else {
            cout << "lezi na x oska" << endl;
        }
    } else if (x < 0) {
        if (y > 0) {
            cout << "II kvadrant" << endl;
        } else if (y < 0) {
            cout << "III kvadrant" << endl;
        } else {
            cout << "lezi na x oska" << endl;
        }
    } else {
        if (y == 0) {
            cout << "koordinaten pocetok" << endl;
        } else {
            cout << "lezi na y oska" << endl;
        }
    }
    return 0;
}
