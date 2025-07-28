#include <stdio.h>
// WAP To Find Factorial Of N Using Recursion

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

void main()
{
    int n, ans;

    printf("Enter a Number : ");
    scanf("%d", &n);

    ans = factorial(n);
    printf("factorial number is : %d ", ans);
}
