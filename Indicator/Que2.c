//  Develop a program to find cubes of all elements from a gien 2D array using a pointer with UDF.

#include <stdio.h>

void cube(int *ptr, int r, int c)
{
    int i;
    for (i = 0; i < r * c; i++)
    {
        int ans = *(ptr + i);
        printf("Cube of %d = %d\n", ans, ans * ans * ans);
    }
}

void main()
{
    int r, c, i, j;

    printf("Enter Count of Array :");
    scanf("%d", &r);
    printf("Enter Size of Array :");
    scanf("%d", &c);

    int arr[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] :", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    cube(&arr[0][0], i, j);
}