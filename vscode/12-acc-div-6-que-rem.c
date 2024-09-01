/*Accept a value and divide it by 6 then find the quentient and remander*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,r,q;
    printf("enter a value:");
    scanf("%d",&a);
    r=a/6;
    q=a-6*q;
    printf("remainder=%d",r);
    printf("\nquotient=%d",q);
    getch();
}