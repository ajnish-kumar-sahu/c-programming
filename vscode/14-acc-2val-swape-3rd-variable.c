/*Accept 2 value then swape to each other by with  using 3rd variable*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter 2 value:");
    scanf("%d%d",&a,&b);
    printf("\nbefore swapping\n");
    printf("a=%d",a);
    printf("\nb=%d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter swapping\n");
    printf("a=%d",a);
    printf("\nb=%d",b);
    getch();
}