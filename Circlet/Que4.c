// Develop a program that prints the given Inverted Left half triangle pattern using a nested for loop.
// 1 0 1 0 1
//   1 0 1 0
//     1 0 1
//       1 0
//         1

#include <stdio.h>

void main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf("  ");
        }
        for (j = 5; j >= i; j--)
        {
            if (j % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
}