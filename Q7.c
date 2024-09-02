/*Given a number ‘n’, write an algorithm and the subsequent
‘C’ program to count the number of two-digit prime
numbers in it when adjacent digits are taken. For example,
if the value of ‘n’ is 114 then the two-digit numbers that
can be formed by taking adjacent digits are 11 and 14. 11 is
prime but 14 is not. Therefore print 1.*/


#include <stdio.h>
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1)
        return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }
    return 1; // Prime
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int count = 0; // Initialize the count of prime two-digit numbers

    // Extract adjacent pairs of digits
    while (n >= 10) {
        int lastDigit = n % 10;
        int secondLastDigit = (n / 10) % 10;
        int twoDigitNumber = secondLastDigit * 10 + lastDigit;

        if (twoDigitNumber >= 10 && twoDigitNumber <= 99) {
            if (isPrime(twoDigitNumber))
                count++;
        }

        n /= 10; // Remove the last digit
    }

    printf("Number of prime two-digit numbers: %d\n", count);

    return 0;
}
