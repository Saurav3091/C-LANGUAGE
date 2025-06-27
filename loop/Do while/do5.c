#include <stdio.h>
// wap to print odd no from 1 to n using  do while loop
void main()
{

    int i = 1, n;

    printf("Enter value of N :"); // user input variable
    scanf("%d", &n);              // user input

    // increment condition

    do
    {
        if (i % 2 == 1)
        {

            printf("%d\n", i);
        } // output the result

        i++;
    } while (i <= n);
}