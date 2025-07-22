#include <stdio.h>


// wap to print only anti-diagonal Element and find sum of it.
void main()
{
    int i, j, r, c, sum = 0;

    printf("Enter Number of Array :");
    scanf("%d", &r);
    printf("Enter Size of Array :");
    scanf("%d", &c);

    int a[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for (i = 0, j = c - 1; i < r, j >= 0; i++, j--)
    {
        sum = sum + a[i][j];
    }

    printf("Sum of Anti-Diagonal Element is :%d", sum);
}