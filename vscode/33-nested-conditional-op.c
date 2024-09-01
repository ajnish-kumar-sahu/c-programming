/*Accept 4 value and find the greatest values by using nested conditional operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,g;
    printf("enter a 1st value:-");
    scanf("%d",&a);
    printf("enter a 2nd value:-");
    scanf("%d",&b);
    printf("enter a 3rd value:-");
    scanf("%d",&c);
    printf("enter a 4rt value:-");
    scanf("%d",&d);
    g=(a>b)?(a>c)?(a>b)?a:d:((c>d)?c:d):((b>c)?((b>d)?b:d):((c>d)?c:d));
    printf("A greatest value=%d",g);
    getch();
}