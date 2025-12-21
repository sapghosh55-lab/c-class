#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x, y;
    printf("Enter two integer values: ");
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("After swapping: x=%d, y=%d\n", x, y);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}