#include <stdio.h>
int main()
{
    int n, i, key, pos = -1;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            pos = i + 1;
            break;
        }
    }
    if (pos != -1)
        printf("Element found at position %d", pos);
    else
        printf("Element not found");
    return 0;
}
