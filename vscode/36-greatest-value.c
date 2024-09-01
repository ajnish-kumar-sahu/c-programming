/*accept 3 values and find the greatest values*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,g;
    printf("enter 1st value :");
    scanf("%d",&a);
    printf("enter 2nd value :");
    scanf("%d",&b);
    printf("enter 3rd value :");
    scanf("%d",&c);
    g=a;
    if(g<b)
    g=b;
    if(g<c)
    g=c;
    printf("\nA greatest value=%d",g);
    getch();
}