#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 1)
                printf("%d", j % 2);
            else
                printf("%d", 1 - (j % 2));
        }
        printf("\n");
    }
    return 0;
}