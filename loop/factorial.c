#include<stdio.h>

void main()
{
    // wap to calculate factorial of N using loop

 int n ;
int i = 1,fact = 1;

printf(" Enter n :");
scanf("%d", &n);

while(i <= n)
{
    fact = fact * i;
    i++;

    
}
printf("factorial is = %d", fact);


}