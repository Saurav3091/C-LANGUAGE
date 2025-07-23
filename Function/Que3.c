// wap to print 1 to n using function.

#include <stdio.h>

void num(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d \n", i);
    }  
}



void main()
{
    int n;

    printf("Enter Number :");
    scanf("%d", &n);
  

    num(n);
   
}