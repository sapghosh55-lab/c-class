#include <stdio.h>

int main()
{
    int x, y, i;
    long long result = 1;

    printf("Enter X and Y: ");
    scanf("%d %d", &x, &y);

    for (i = 1; i <= y; i++)
    {
        result = result * x;
    }

    printf("%d^%d = %lld\n", x, y, result);

    return 0;
}
