#include <stdio.h>
// WAP TO GET AND PRINT ONLY EVEN NUMBERS OF ARRAY
int main()
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
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}