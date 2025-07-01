#include<stdio.h>
// wap to print reverse number 321
void main()
{
    int num = 5678, rev = 0;
    while(num > 0)
    {
        int ld =num % 10;
        rev = (rev * 10) + ld;
        num /= 10;
    }
    printf("reverse no is %d", rev);
}