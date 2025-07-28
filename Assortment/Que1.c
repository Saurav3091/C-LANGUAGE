// Q.1 Negative Elements in 1D Array.

#include <stdio.h>

void main()
{
    int n, i;

    printf("Enter Size of Array :");
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] :", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }
}