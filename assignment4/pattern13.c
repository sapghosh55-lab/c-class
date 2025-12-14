#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j < n - i + 1 || j > n + i - 1)
                printf(" ");
            else
            {
                int d = abs(j - n);
                char ch = 'A' + (i - 1) + ((i - 1) - d);
                printf("%c", ch);
            }
        }
        printf("\n");
    }
    return 0;
}
