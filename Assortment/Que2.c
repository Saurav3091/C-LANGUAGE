// Q.2 Largest Element in 2D Array.

#include <stdio.h>

void main()
{
    int r, c, i, j;

    printf("Enter Count of Array :");
    scanf("%d", &r);
    printf("Enter Size of Array :");
    scanf("%d", &c);

    int a[r][c];
    int max = a[0][0];

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
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
        printf("\n");
    }

    printf("Largest Element in 2D Araay :%d", max);
}