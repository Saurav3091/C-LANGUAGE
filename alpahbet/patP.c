// * * * *
// *      *
// *      *
// * * * *
// *
// *
// *

#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((j!=5) && (i == 1 || i == 4 || j == 1 ))
            {
                printf("* ");
            }
            else if((i==2) && (j==1 || j==5))
            {
                printf("* ");
            }
            else if((i==3) && (j==1 || j==5))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}