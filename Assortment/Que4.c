// Q.4 Sum of Elements in Row  & Column of 2D Array.

#include <stdio.h>

void main()
{
    int r, c, i, j, sum = 0;

    printf("Enter Count of Array :");
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

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }
        printf("\n");
    }

    printf("Sum of 2D Array :%d", sum);
}