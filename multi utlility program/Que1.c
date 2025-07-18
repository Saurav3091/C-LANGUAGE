#include <stdio.h>
// celsius to farenheit
void main()
{
    int celsius;
    float fah;

    printf("Enter degree in celsius :");
    scanf("%d", &celsius);

    fah = (celsius * 9 / 5) + 32;

    printf("fareheit =%f", fah);
}