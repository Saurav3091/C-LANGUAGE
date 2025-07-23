// Write a Program to check if a given number is divisible by both 3 and 5 or not by using a UDF.

#include<stdio.h>

void div(int n)
{
    if(n%3==0 && n%5==0)
    {
        printf("The Number is divisable by both 3 & 5.");
    }
    else if(n%3==0)
    {
        printf("The Number is divisable by 3.");
    }
    else if(n%5==0)
    {
        printf("The Number is divisable by 5.");
    }
}
void main()
{
    int n;

    printf("Enter Number :");
    scanf("%d", &n);

    div(n);
}