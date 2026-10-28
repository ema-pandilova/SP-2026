//
// Created by ema on 20.10.26.
//

/*Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да се напише програма што ќе провери дали од отсечките
 *може да се конструира триаголник, при што ако може,
 *да се провери дали истиот е правоаголен и да се пресмета неговата плоштина. Во спротивно, треба да се испечатат соодветни пораки.
 */

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    //a=5, b=1, c=2
    if ((a + b) > c && (a + c) > b && (b + c) > a) {
        cout << "moze da se konstruira triagolnik" << endl;
        int tmp;
        if (a > b) {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (a > c) {
            tmp = a;
            a = c;
            c = tmp;
        }
        if (b > c) {
            tmp = b;
            b = c;
            c = tmp;
        }

        if (a * a + b * b == c * c) {
            cout << "Pravoagolen triagolnik" << endl;
        } else {
            cout << "Ne e pravoagolen" << endl;
        }
    } else {
        cout << "ne moze da se konstruira" << endl;
    }
    return 0;
}
