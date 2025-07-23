//  Write a Program to find the cube of a given number using UDF.

#include <stdio.h>

void cube(int n)
{
    int c = n * n * n;
    printf("Cube is :%d", c);
}

int main()
{
    int n;

    printf("Enter Number :");
    scanf("%d", &n);

    cube(n);
    return 0;
}