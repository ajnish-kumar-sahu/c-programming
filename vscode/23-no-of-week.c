/*accept a value for no of week's then find the total no of year months weeks and day */
#include<stdio.h>
#include<conio.h>
void main()
{
    int d,y,m,w;
    printf("enter a value for no of week's:-");
    scanf("%d",&w);
    d=w*7;
    y=d/365;
    m=(d%365)/30;
    w=((d%365)%30)/7;
    d=((d%365)%30)%7;
    printf("\ntotal no of years=%d",y);
    printf("\ntotal no of months=%d",m);
    printf("\ntotal no of weeks=%d",w);
    printf("\nrest of the days=%d",d);
    getch();
}