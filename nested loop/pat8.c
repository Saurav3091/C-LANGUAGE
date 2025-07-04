#include<stdio.h>
// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5
void main()
{
    int i, j;

    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j<=i; j++)
            printf("%d", j);
            
        printf("\n");
    }
}
