#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= n; i++) {    // start from 2 because 1 is not prime
        isPrime = 1;             // assume number is prime

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {    // if divisible, not prime
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    return 0;
}
