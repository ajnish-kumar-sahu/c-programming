/*Accept 2 value then find the greatest values*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter 1st value:-");
    scanf("%d",&a);
    printf("enter 1st value:-");
    scanf("%d",&b);
    if(a>b)
    {
        printf("A greatest value=%d",a);
    }
    if(b>a)
    {
        printf("A greatest value=%d",b);
    }
    getch();
}