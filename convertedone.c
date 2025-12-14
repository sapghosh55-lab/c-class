#include<stdio.h>
int main()
{
    int n,r,bin=0,p=1;
    printf("Enter a number :");
    scanf("%d", &n);
    while(n>0)
    {
        r=n%2;
        bin= bin+r*p;
        p=p*10;
        n=n/2;
    }
    printf("Binary number: %d", bin);
    return 0;
}