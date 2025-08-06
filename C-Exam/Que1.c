// Create a C program to check if a character is entered by the user is a porositive or consonant using a switch statement.

#include<stdio.h>

void main()
{
    #include <stdio.h>


    char ch;

   
    printf("Enter an alphabet: ");
    scanf(" %c", &ch); 

    
    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
       
            printf("It is a Vowel.\n");
            break;

    default:
        case 'b':  case 'c':  case 'd':  case 'f':  case 'g':  case 'h':  case 'j':  case 'k':  case 'l':  
        case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't':  case 'v':
         case 'w': case 'x': case 'y': case 'z': 

        printf(" it is a constant\n");
    }


    
}

