/*Accept 4 value and find the gretest values*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,g;
    printf("enter 1st value:");
    scanf("%d",&a);
    printf("enter 2nd value:");
    scanf("%d",&b);
    printf("enter 3rd value:");
    scanf("%d",&c);
    printf("enter 4th value:");
    scanf("%d",&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            g=a;
            else
            g=d;
        }
        else
        {
            if(c>d)
            g=c;
            else
            g=d;
        }
    }
    else
    {
        if(b>c)
        {
            if(b>d)
            g=b;
            else
            g=d;
        }
        else
        {
            if(c>d)
            g=c;
            else
            g=d;
        }
    }
    printf("\nA greatest value=%d",g);
    getch();
}