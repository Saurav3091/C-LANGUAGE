// Wap to find the third angle of a right triangle when two other angles are given.

#include <stdio.h>

void main()
{
    int first, second, third; 

    printf("Enter First Angle :"); 
    scanf("%d",&first);

    printf("Enter Second Angle :");
    scanf("%d",&second);

    third = 180 - (first + second);  

    printf("Third Angle of Triangle is :%d", third); 
}