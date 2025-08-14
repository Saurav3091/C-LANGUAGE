// Q.2 Frequency Counter
// Extend the program to count the frequency of each character in a given string.

#include <stdio.h>

void main()
{
    char str[100];
    int i, count = 1, length = 0, j;

    printf("Enter a String: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }
    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (str[i] == str[j] && str[j] != ' ')
            {
                count++;
                str[j] = ' ';
            }
        }
        if (str[i] != ' ')
        {
            printf("'%c'=>%d\n", str[i], count);
            count = 1;
        }
    }
}