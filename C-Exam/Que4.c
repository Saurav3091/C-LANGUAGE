// Write a C program to find square of each elements of an 1D array using Pointer.

#include<stdio.h>

void square(int *ptr , int n)
{
    int i;
    int ans ;

    for ( i=0 ; i<n ; i++)
    {
        ans = *(ptr + i);
        printf("\n%d", ans * ans);
    }
}

void main()
{
    int i, n;

    printf("Enter size of array ");
    scanf("%d", &n);

    int a[n];

    for(i=0;i<n; i++)
    {
        printf("enter a[%d] : ",i);
        scanf("%d", &a[i]);
    }

    square(&a[0],n);
}