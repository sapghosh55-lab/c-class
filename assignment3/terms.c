#include <stdio.h>
int main()
{
    int i, n;
    float s=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        s=s+(1.0/i);
    }
    printf("Sum of the series is: %.2f\n", s);
    return 0;
}