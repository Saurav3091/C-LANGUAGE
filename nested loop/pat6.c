#include<stdio.h>
// looping with pattern
// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1
void main()
{
    int i, j;

    for(i=5; i>=1; i--)
    {
        for(j = i; j<=5; j++)
        printf("%d", i);

    printf("\n");
    }
        

    
}