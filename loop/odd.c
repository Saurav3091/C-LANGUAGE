#include<stdio.h>
// wap to print odd no from 1 to n while using loop
void main()
{
    int n;
    int i = 1;

    printf("Enter value of N :"); // user input variable
    scanf("%d", &n);  // user input 
    
    // increment condition 

    while(i <= n)
{
    if (i % 2 == 1)
    {
        printf("%d\n", i); // output the result 
    }
    i++;
}
}