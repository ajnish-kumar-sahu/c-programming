/*working with explicity type casting*/
#include<stdio.h>
#include<conio.h>
void main()
{
   int b=2,a=5;
   float c=a/b;
   float f=(float)a/b;
   printf("a=%d",a);
   printf("\nb=%d",b);
   printf("\nc=%f",c);
   printf("\nf=%f",f);
   getch();
}