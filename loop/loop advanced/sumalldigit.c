#include<stdio.h>
// wap to find sum all of digit of a number 
void main()
{
int num , sum = 0;

printf("Enter a Number : ");
scanf("%d", &num);

while(num > 0)
{
    int ld = num % 10;
    sum = sum + ld;
    num /= 10;

}printf("sum is %d", sum);
}