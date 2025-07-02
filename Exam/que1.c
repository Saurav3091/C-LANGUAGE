#include <stdio.h>
// 1. Write C program to check number is negative, postivie & neutral using ladder if else

void main()
{
    int num; 

    printf("Enter a Num : "); 
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Number is positive : ");
    }
    else if (num < 0)
    {
        printf("Number is negative : ");
    }
    else
    {
        printf("Number is neutral :");
    }
}