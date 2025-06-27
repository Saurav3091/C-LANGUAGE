#include <stdio.h>

void main()
{
    // wap to calculate factorial of N using do while loop

    int n;
    int i = 1, fact = 1;

    printf(" Enter N :"); // user value
    scanf("%d", &n);

    do
    {
        fact = fact * i;
        i++;

    } while (i <= n); // condition

    printf("factorial is = %d", fact); // output 
}