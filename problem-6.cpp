/*
    Find the difference between the sum of the squares of the first one hundred natural numbers
    and the square of the sum.
*/

#include <iostream>
// using namespace std;

int main() {
    long int difference = 0;
    int squareSum = 0, sumSquare = 0, x = 0, y = 0;
    int batas = 100;

    for(int i = 1; i <= batas; i++) {
        x = i * i;
        squareSum += x;
    }

    for(int j = 1; j <= batas; j++) {
        y += j;
    }
    
    sumSquare = y * y;
    difference = sumSquare - squareSum;
    printf("%d", difference);

    return 0;
}