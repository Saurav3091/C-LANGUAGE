// *     *
// *     *
// *     *
// *     *
//  *   *
//    *

#include <stdio.h>

void main()
{
    int i, j;

    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if ((i != 5 && i != 6) && (j == 1 || j == 5))
            {
                printf("* ");
            }
            else if ((i == 5) && (j == 2 || j == 4))
            {
                printf("* ");
            }
            else if (i==6 && j==3)
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