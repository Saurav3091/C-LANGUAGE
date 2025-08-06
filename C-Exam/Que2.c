#include <stdio.h>
#include <conio.h>
// Create a C program to find the smallest element in an 1D array.
void main()
{
    int n, i, smallest;

    printf("Enter a number of array : ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d Elements:\n ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    smallest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("The Smallest Element is : %d\n", smallest);
}