#include <stdio.h>
int main()
{
    int n, i = 0;
    int bin[32];
    printf("Enter a positive decimal number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary equivalent = ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
    return 0;
}
