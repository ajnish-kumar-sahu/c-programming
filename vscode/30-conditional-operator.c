/*Accept 2 value and find the greatest values by using conditional operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,g;
    printf("enter a 1st value:-");
    scanf("%d",&a);
    printf("enter a 2nd value:-");
    scanf("%d",&b);
    g=(a>b)?a:b;
    printf("a greatest value=%d",g);
    getch();
}