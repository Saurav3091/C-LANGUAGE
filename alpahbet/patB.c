
// * * *
// *    *
// *   *
// * * *
// *    *
// *    *
// * * *
#include <stdio.h>

void main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((j == 1))
            {
                printf("* ");
            }
            else if ((i == 1) && (j != 4 && j != 5))
            {
                printf("* ");
            }
            else if ((i == 2 || j==1) && ( j==4))
            {
                printf("* ");
            }
             else if ((i == 3 || j==1) && (j==4))
            {
                printf("* ");
            }
             else if ((i == 4) &&  (j != 4 && j != 5))
            {
                printf("* ");
            }
             else if ((i == 5 || j==1) && (j==4))
            {
                printf("* ");
            }
             else if ((i == 6 || j==1) && ( j==4))
            {
                printf("* ");
            }
             else if ((i == 7) &&  (j != 4 && j != 5))
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