#include<stdio.h>
// wap to print even no from 1 to n while using loop
void main()
{
    int n;


    printf("Enter value of N :"); // user input variable
    scanf("%d", &n);  // user input 
    
    // decrement condition 

    while(n >= 1)
{
    if (n % 2 == 0)
    {
        printf("%d\n", n); // output the result 
    }
    n--;
}
}