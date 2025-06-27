#include <stdio.h>
// wap to print the multiplication table of n while using loop

void main()
{
	int n; // variable
	int i = 1;

	printf(" Enter multiplication no: "); // user input
	scanf("%d", &n);

	do
	{
		printf("%d * %d = %d\n", n, i, n * i); // output

		i++;
	} while (i <= 10); // condition check
}
