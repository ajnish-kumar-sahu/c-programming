/*accept value for year,months and weakes then find the total no of days*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int y,m,w,t;
   printf("enter a values for year:");
   scanf("%d",&y);
   printf("enter a values for months:");
   scanf("%d",&m);
   printf("enter a values for week:");
   scanf("%d",&w);
   t=365*y+30*m+7*w;
   printf("\n total no of days=%d",t);
   getch();
}