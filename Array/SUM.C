#include <stdio.h>
// WAP TO FIND SUM OF ALL ELEMENT OF ARRAY
int main()
{
    int n, i, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter a[%d] :", i);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("sum=%d", sum);
    return 0;
}