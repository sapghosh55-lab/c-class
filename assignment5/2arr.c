#include <stdio.h>
int main()
{
    int i;
    int a[5], b[5], sum[5];
    printf("Enter elements of first array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter elements of second array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum[i] = a[i] + b[i];
    }
    printf("Sum of the two arrays:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", sum[i]);
    }
    return 0;
}
