#include <stdio.h>
// Write C program to print multiplication table of any number

void main()
{
    int i = 1, n;

    printf("Ennter table no : ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}