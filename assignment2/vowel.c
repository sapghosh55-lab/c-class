#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a alphabet :");
    scanf("%c", &ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') 
    {
        printf("%c is a Vowel\n", ch);
    }
    else
    {
        printf("%C is a consonant\n", ch);
    }
    return 0;
}