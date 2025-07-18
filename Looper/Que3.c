// wap to find sum of first and last digit of a number.

#include <stdio.h>

void main()
{
    int num, fd = 0;

    printf("Enter Number :");
    scanf("%d", &num);

    int ld = num % 10;

    while (num > 9)
    {
        num /= 10;
    }
    fd = num;
    printf("Sum of First and Last Digit :\n");
    printf("%d + %d = %d", fd, ld, fd + ld);
}