/*  
    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
    The sum of these multiples is 23.
    Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>
using namespace std;

int main() {

    int i = 0, j = 0, kelipatanTiga = 0, kelipatanLima = 0, makan = 0;
    long jumlah = 0;

    for(int x = 1; x < 1000; x++) {
        if(x % 3 == 0) {
            i = x;
            jumlah += i;
            cout << i << " ";
        }
        if(x % 5 == 0 && x != i) {
            j = x;
            jumlah += j;
            cout << j << " ";
        }
    }

    cout << "\n" << jumlah;

    return 0;
}