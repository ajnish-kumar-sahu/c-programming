/*working with arithmatic operations*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
   printf("enter 2 values");
   scanf("%d%d",&a,&b);
   printf("sum=%d",(a+b));
   printf("\nsub=%d",(a-b));
   printf("\nmulti=%d",(a*b));
   printf("\ndiv=%f",((float)a/b));
   printf("\nrem=%d",(a%b));
   getch();
}