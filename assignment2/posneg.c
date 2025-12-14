#include <stdio.h>
int main()
{
    int n;
    printf("Enter an integer :");
    scanf("%d", &n);
    if (n > 0)
        printf("The number is Positive\n");
    else if (n < 0)
        printf("The number is Negative\n");
    else
        printf("The number is zero\n");
    return 0;
}