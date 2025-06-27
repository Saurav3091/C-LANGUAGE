#include<stdio.h>

void main()
{
    //wap to print program  1 to N  while using do while loop

    int i = 1, n ;

    printf("Enter N :"); // user input message
    scanf("%d", &n);

    do{
        printf("%d\n", i); // output the result

        i++; // increment value 

    }while(i <= n);  //
}