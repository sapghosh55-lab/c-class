#include <stdio.h>

int main() {
    int num, rem, rev = 0, place = 1;

    printf("Enter a positive decimal number: ");
    scanf("%d", &num);

    // Convert to binary by forming reversed binary
    while (num > 0) {
        rem = num % 2;        // get binary digit
        rev = rev * 10 + rem; // build reversed binary number
        num /= 2;
    }

    printf("Binary (reversed) = %d\n", rev);

    return 0;
}
