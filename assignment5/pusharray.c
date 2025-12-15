#include <stdio.h>
int main()
{
    int i;
    int arr[10];
    for (i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }
    printf("Print the array elements:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}