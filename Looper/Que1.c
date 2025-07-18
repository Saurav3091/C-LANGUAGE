// Develop a program that prints all alphabets from 'a' to 'z' by skipping 3 alphabets using a do-while loop.

#include <stdio.h>

void main()
{
    char i = 'a'; 

    do
    {
        printf("%c ", i); 
        i += 4;           
    } while (i <= 'z'); 
}