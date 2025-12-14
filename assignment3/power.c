#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("%d is NOT a power of 2.\n", num);
        return 0;
    }

    while (num % 2 == 0) {
        num = num / 2;
    }

    if (num == 1)
        printf("It is a power of 2.\n");
    else
        printf("It is NOT a power of 2.\n");

    return 0;
}
