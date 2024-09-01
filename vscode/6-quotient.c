/*find the quotient value and reamender value after dividing a value by 4*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,r,q;
    printf("a=%d",a);
    q=a/4;
    r=a%4;
    printf("\n quotient value=%d",q);
    printf("\n remainder value=%d",r);
    getch();
}