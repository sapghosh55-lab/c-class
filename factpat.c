#include <stdio.h>
int main()
{
    int n;
    double sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int d = 2 * i - 1;
        double fact = 1.0;
        for (int j = 1; j <= d; j++)
        {
            fact = fact * j;
        }
        if (i % 2 == 1)
            sum = sum - (1.0 / fact);
        else
            sum = sum + (1.0 / fact);
    }
    printf("Sum of the series = %.10lf\n", sum);
    return 0;
}
