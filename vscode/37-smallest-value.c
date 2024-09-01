/*accept 4 values and find the smallest values*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,s;
    printf("enter 1st value :");
    scanf("%d",&a);
    printf("enter 2nd value :");
    scanf("%d",&b);
    printf("enter 3rd value :");
    scanf("%d",&c);
    printf("enter 4th value :");
    scanf("%d",&d);
    s=a;
    if(s>a)
    s=a;
    if(s>b)
    s=b;
    if(s>c)
    s=c;
    if(s>d)
    s=d;
    printf("\nA smallest value=%d",s);
    getch();
}