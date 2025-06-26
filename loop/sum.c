#include<stdio.h>

void main()
{
    // wap to print sum 1 to n while using loop
int n ;
int i = 1,sum = 0;

printf(" Enter n :");
scanf("%d", &n);

while(i <= n)
{
    sum = sum + i;
    i++;

    


}
printf("sum is = %d\n", sum);


}