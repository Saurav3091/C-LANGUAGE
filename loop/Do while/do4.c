#include <stdio.h>

void main()

{ // wap to print program  N to 1  while using do while loop
    int i = 1, n;

    printf("Enter N :");
    scanf("%d", &n);

    do
    {
        printf("%d\n", n);
        n--; //  decrement value

    } while (n >= 1); ////loop will end when I become greater than n
}