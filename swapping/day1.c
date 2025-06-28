#include <stdio.h>

void main()
{
    // Swapping - Interchanging values of two variables using a third variable

  

    int a, b, c; // Declare three variables

    // Input values
    printf("Enter a : ");
    scanf("%d", &a);  // Example: a = 10
    printf("Enter b : ");
    scanf("%d", &b);  // Example: b = 20

    // Swapping logic
    c = a;   
    a = b;   
    b = c;   

    // Output after swapping
    printf("After Swapping:\na = %d, b = %d\n", a, b);
}