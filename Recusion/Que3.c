// Wap to print reverse Number using Recursion.

#include <stdio.h>

int reverse(int n, int rev)
{
    if (n == 0)
    {
        return rev;
    }
    return reverse(n / 10, rev * 10 + n % 10);
}

void main()
{
    int n, ans;

    printf("Enter Number :");
    scanf("%d", &n);

    ans = reverse(n, 0);

    printf("Reverse Number is :%d", ans);
}