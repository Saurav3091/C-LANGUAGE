// Q-1. Palindrome Checker.
// Develop a program that checks a whether a given string is palindrome or not without using string function.
#include <stdio.h>

void main()
{
    char str[100];
    int i, length = 0, palindrome = 1;

    printf("Enter a String :");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
    {
        printf("The String is a Palindrome.\n");
    }
    else
    {
        printf("The String is Not a Palindrome.\n");
    }
}