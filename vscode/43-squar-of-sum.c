/*Accept 2 values if 1st value will be greater then 2nd value then 
find the sum of squar of values other wise squar of sum of values*/
#include <stdio.h>
#include <conio.h>

void main() 
{
    int a, b, r;
    printf("Enter the 1st value: ");
    scanf("%d", &a);
    printf("Enter the 2nd value: ");
    scanf("%d", &b);

    if (a > b)
    {
        r = a * a + b * b;
        printf("Sum of square values = %d\n", r);
    } 
    else
    {
        r = (a + b) * (a + b);
        printf("Square of sum values = %d\n", r);
    }

    getch();
}
