/*accept a value for no of month's then find the total no of year months weeks and day */
#include<stdio.h>
#include<conio.h>
void main()
{
    int d,y,m,w;
    printf("enter a value for no of months:-");
    scanf("%d",&m);
    y=m/12;
    m=(m%12);
    w=(m%12)/7;
    d=(m%12)%7;
    printf("\ntotal no of years=%d",y);
    printf("\ntotal no of months=%d",m);
    printf("\ntotal no of weeks=%d",w);
    printf("\nrest of the days=%d",d);
    getch();
}