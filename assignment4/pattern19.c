#include <stdio.h>

int main()
{
    int n = 5, i, j;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {

            // left part
            if (j <= i)
                printf("%c", 'A' + j - 1);

            // right part
            else if (j > 2 * n - i)
                printf("%c", 'A' + (2 * n - j));

            // middle spaces
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
