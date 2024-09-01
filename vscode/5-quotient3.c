/*find the sum of quotient and remainder value after dividing a value by 5 */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,r,q,sum;
    printf("a=%d",a);
    q=a/5;
    r=a/5;
    printf("\n quotient value=%d",q);
    printf("\n remainder value=%d",r);
    sum=q+r;
    printf("\n sum of quotient and remainder value=%d",sum);
    getch();
}