/*
    2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
    What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
// using namespace std;

int main() {
    long int angka = 1;
    long int batas = 1000000000;

    while(angka < batas) {
        if(angka % 1 == 0 && angka % 2 == 0 && angka % 3 == 0 && angka % 4 == 0 && angka % 5 == 0 &&
        angka % 6 == 0 && angka % 7 == 0 && angka % 8 == 0 && angka % 9 == 0 && angka % 10 == 0 &&
        angka % 11 == 0 && angka % 12 == 0 && angka % 13 == 0 && angka % 14 == 0 && angka % 15 == 0 &&
        angka % 16 == 0 && angka % 17 == 0 && angka % 18 == 0 && angka % 19 == 0 && angka % 20 == 0) {
            std::cout << angka;
            break;
        }
        angka++;
    }

    // std::cout << "\n" << jumlah;

    return 0;
}