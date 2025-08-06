#include <stdio.h>
// Write a C program that defines a function to reverse a 3 digit number.
void reverse(int num)
{
    int r, rev = 0;
    while (num > 0)
    {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    printf("Reverse number : %d", rev);
}
void main()
{
    int num;
    printf("Enter 3 digit Number :  ");
    scanf("%d", &num);

    reverse(num);
}