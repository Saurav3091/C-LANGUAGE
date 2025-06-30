#include <stdio.h>
// wap to find sum of first and last digit of a number

void main()
{
    int num = 512; // taken the variable in the name of num
    int fd = 0;    // first digit

    int ld = num % 10; // 512 % 10 =2 is last digit of the number

    while (num > 9) // in this condition single digit is not allowed
    {
        num /= 10; // 512/10 = 51, 51/10= 5 , 5/10= 0 (num =5)
    }
    fd = num; // in this value of num is assign to fd

    printf("Sum of First And Last Digit : \n "); // print fd and ld
    printf("%d + %d = %d", fd, ld, fd + ld);     // this is the final output
}