/*
    The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
    Find the sum of all the primes below two million.
*/

#include <iostream>
// using namespace std;
bool isPrime(int n) {
    // Corner case
    if(n <= 1) {
        return false;
    }
    // Check from 2 to n-1
    for(int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int count = 0, constraint = 2000000;
    long long unsigned int jumlah = 0;

    while(count < constraint) {
        if(isPrime(count)) {
            jumlah += count;
            std::cout << count << " ";
        }
        count++;
    }

    std::cout << "\n" << jumlah;

    return 0;
}