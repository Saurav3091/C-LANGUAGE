// Develop a program that prints the given Full Pyramind pattern using a nested for loop.

//         5
//       4 5 4
//     3 4 5 4 3
//   2 3 4 5 4 3 2
// 1 2 3 4 5 4 3 2 1

#include <stdio.h>

#include <stdio.h>

void main()
{
    int i, j, k;

    for (i = 5; i >= 1; i--)
    {
        for (k = 1; k <= i; k++)
        {
            printf("  ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d ", j);
        }
        for (j = 4; j >= i; j--)
        {
            printf("%d ", j);
        }
        
        printf("\n");
    }

   
}