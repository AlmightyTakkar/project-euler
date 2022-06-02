/*
    By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
    What is the 10 001st prime number?
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
    int count = 0, constraint = 10001, i = 0, j = 0;

    while(count < constraint) {
        if(isPrime(i)) {
            count++;
            j = i;
        }
        i++;
    }

    std::cout << j;

    return 0;
}