#include <stdio.h>

// WAP to find sum of 1 to N using Recursion

int sum(int n)
{
    if (n > 0)
    {
        return n + sum(n - 1);
    }
    return 0;
}

void main()
{
    int n, ans;

    printf("Enter a Number : ");
    scanf("%d", &n);

    ans = sum(n);
    printf("Sum = %d", ans);
}