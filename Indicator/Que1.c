// Develop a program that finds the length of a string using a pointer.

#include <stdio.h>

void main()
{
    char name[10];
    char *ptr;
    int len = 0;

    printf("Enter any String:");
    scanf("%s", name);

    ptr = name;

    while (*ptr != '\0')
    {
        len++;
        ptr++;
    }

    printf("Length of String :%d\n", len);
}