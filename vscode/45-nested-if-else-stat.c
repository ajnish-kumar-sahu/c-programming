/*Accept 3 value and find the gretest values*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,g;
    printf("enter 1st value:");
    scanf("%d",&a);
     printf("enter 2nd value:");
    scanf("%d",&b);
     printf("enter 3rd value:");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        g=a;
        else
        g=c;
    }
    else
    {
        if(b>c)
        g=b;
        else
        g=c;
    }
    printf("\ngreatest value=%d",g);
    getch();
}