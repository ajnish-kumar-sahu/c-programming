/*Accept 3 value and find the greatest values by using conditional operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,g;
    printf("enter a 1st value:-");
    scanf("%d",&a);
    printf("enter a 2nd value:-");
    scanf("%d",&b);
    printf("enter a 3rd value:-");
    scanf("%d",&c);
    g=(a>b)?a:b;
    g=(c>g)?c:g;
    printf("a greatest value=%d",g);
    getch();
}