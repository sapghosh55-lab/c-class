#include <stdio.h>
float product(float a, int b);
int main()
{
    float x, result;
    int y;
    printf("Enter a float and an integer value: ");
    scanf("%f %d", &x, &y);
    result = product(x, y);
    printf("The product of %.2f and %d is %.2f\n", x, y, result);
    return 0;
}
float product(float a, int b)
{
    return a * b;
}