#include <stdio.h>
//Write C program to calculate factorial of a number.

void main()
{
    int n;
    int i = 1, fact = 1;

    printf("Enter N : ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++)
    {
        fact = fact * i;
    }

     printf("factorial is = %d",fact);
}