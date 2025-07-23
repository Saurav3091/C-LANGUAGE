// wap to perform all arithmatic operation using function.

#include <stdio.h>

void arith(int a, int b)
{
    printf("\na + b= %d", a + b);
    printf("\na - b= %d", a - b);
    printf("\na * b= %d", a * b);
    printf("\na / b= %d", a / b);
   
}
void main()
{
    int a, b;

    printf("Enter A : ");
    scanf("%d", &a);

    printf("Enter B : ");
    scanf("%d", &b);

    arith(a, b);
}