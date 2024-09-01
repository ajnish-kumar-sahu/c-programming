/*Accept 2 value then swape to each other by using 3rd variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,temp;
    printf("enter 2 value:");
    scanf("%d%d",&a,&b);
    printf("\nbefore swapping\n");
    printf("a=%d",a);
    printf("\nb=%d",b);
    temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping\n");
    printf("a=%d",a);
    printf("\nb=%d",b);
    getch();
}