#include <stdio.h>
// looping with pattern
// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5
void main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= i; j--)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}
