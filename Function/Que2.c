// wap to print multiplication table of n. using funtion

#include <stdio.h>

void table(int n)
{
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("\n%d * %d = %d ", n, i, i * n);
    }
}

void main()
{
    int n;

    printf("Enter Table Number:");
    scanf("%d", &n);

    table(n);
}