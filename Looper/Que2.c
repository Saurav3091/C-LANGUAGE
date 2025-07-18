// Develop a Program to count the total number of digits in a number.

#include <stdio.h>

void main()
{
    int n, count = 0;

    printf("Enter Number :");
    scanf("%d", &n);

    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    printf("Total Number of Digit: %d", count);
}