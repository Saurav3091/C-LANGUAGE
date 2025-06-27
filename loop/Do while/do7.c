// wap to find leap year from 2000 to 3000 using do while loop

#include<stdio.h>

void main()
{
    int start =2000;
    int end = 3000;

    do
    {
        printf("%d\t", start);
        start += 4;
    }
    while(start <= end);



}
