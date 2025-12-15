#include <stdio.h>
int main()
{
    int n, i;
    int arr[100], max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Largest number = %d", max);
    return 0;
}
