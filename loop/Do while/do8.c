#include <stdio.h>

void main()
{
    // wap to print sum 1 to n using do while loop
    int n;
    int i = 1, sum = 0;

    printf(" Enter n :"); // user input 
    scanf("%d", &n);

    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);
    printf("sum is = %d\n", sum);
}