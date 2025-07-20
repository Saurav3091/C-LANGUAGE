#include <stdio.h>
//WAP TO GET AND PRINT ARRAY OF N SIZE
void main()
{
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] :", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}