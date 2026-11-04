//
// Created by ema on 1.11.26.
//

#include <iostream>
using namespace std;
// Да се напише програма што од непознат број на цели броеви кои се внесуваат од тастатура ќе ги определи позициите (редните броеви на внесување)
// на двата последователни броја што ја имаат најголемата сума.
// Програмата завршува ако едно по друго (последователно) се внесат два негативни цели броја.
// 2 4 3 4 2 1 1 6 1 7 -1 -1

int main() {

    int prev, curr;
    int max_sum = 0, sum = 0, position, max_position;
    cin >> prev >> curr;
    if( prev < 0 && curr < 0) {
        return 0;
    }
    position = 2;
    max_sum = prev + curr;
    max_position = position;
    for(position = 3; prev >=0 || curr>=0; position ++) {
        prev = curr;
        cin >> curr;
        sum = prev + curr;
        if(sum>max_sum) {
            max_sum=sum;
            max_position = position;
        }
    }
    cout<<max_position<<" "<<max_position-1;
}