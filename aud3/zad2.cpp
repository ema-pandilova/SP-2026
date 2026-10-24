//
// Created by ema on 20.10.26.
//

#include <iostream>
using namespace std;

// Од тастатура се внесуваат координати на една точка од рамнина. Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка.

int main() {
    int x, y;
    cin >> x >> y;
    // прв начин за решавање

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

    // втор начин за решавање
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
