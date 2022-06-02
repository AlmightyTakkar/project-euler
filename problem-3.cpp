/*
    The prime factors of 13195 are 5, 7, 13 and 29.
    What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
// using namespace std;

int main() {
    long int angka = 20;
    int jumlah = 0;
    int i = 2;

    while(i < angka) {
        if(2 % angka == 0) {
            std::cout << 2 << " ";
            angka /= 2;
        }
        if(i % angka == 0) {
            std::cout << i << " ";
            angka /= i;
        }
        i++;
    }

    // std::cout << "\n" << jumlah;

    return 0;
}