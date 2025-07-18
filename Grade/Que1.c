#include <stdio.h>

void main()
{
    int marks;
    char grade;
    printf("Enter You Marks : ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Grade is A");
        grade = 'A';
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Grade is B");
        grade = 'B';
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Grade is C");
        grade = 'C';
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Grade is D");
        grade = 'D';
    }
    else if (marks >= 50 && marks < 60)
    {
        printf("Grade is E");
        grade = 'E';
    }
    else
    {
        printf("Grade F (fail)");
        grade = 'F';
    }
    switch (grade)
    {
    case 'A':
        printf("\nExcellent Work !");
        break;

    case 'B':
        printf("\nWell Done !");
        break;

    case 'C':
        printf("\nGood job!");
        break;

    case 'D':
        printf("\nYou Passed But Do Better !");
        break;

    case 'E':
        printf("\nBakwass !");
        break;

    case 'F':
        printf("\nSorry You Failed  !");
        break;
    }

    if(grade>='A' && grade<='D')
    {
        printf("\nCongratulations ! You Are Eligibe For The Next Level");
    }

    else
    {
        printf("\nPlease Try Again");
    }
}
