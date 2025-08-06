#include <stdio.h>
#include <conio.h>
// Print a below pattern using nested for loop in C language:

// 100

// 81 81

// 64 64 64

// 49 49 49 49

// 36 36 36 36 36

void main()
{
    int i, j;
    int num = 10;
    for (i = 1; i <= 5; i++)
    {
        int square = num * num;

        for (j = 1; j <= i; j++)
        {
            printf("%d ", square);
        }

        printf("\n");
        num--;
    }
}
