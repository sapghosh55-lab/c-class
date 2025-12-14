#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the value of n: ");
    scanf("%d", &n); // n = 3
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (i == 1)
            {
                // first row: all stars
                printf("*");
            }
            else if (j == i || j == 2 * n - i)
            {
                // boundary stars
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
