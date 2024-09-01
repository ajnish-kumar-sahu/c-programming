/*accept a value for no of day then find the total no of year months weeks and rest of the day's
eg-day=1000,year=?,month=?,weeks=?,rest day's=? */
#include<stdio.h>
#include<conio.h>
void main()
{
    int d,y,m,w;
    printf("enter a value for no of day:-");
    scanf("%d",&d);
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