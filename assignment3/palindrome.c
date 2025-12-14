#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter any number: ");
    scanf("%d", &num);

    original = num;

    while (num > 0) {
        digit = num % 10;              // get last digit
        reversed = reversed * 10 + digit; // build reversed number
        num /= 10;                     // remove last digit
    }

    if (reversed == original)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is NOT a Palindrome number.\n", original);

    return 0;
}
