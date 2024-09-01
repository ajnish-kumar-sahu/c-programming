/*accept a value for principle amount time and rate then find the simple intrest*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int p,r,t;
    float si;
    printf("enter amount value:-");
    scanf("%d",&p);
    printf("enter a rate value:-");
    scanf("%d",&r);
    printf("enter a time value:-");
    scanf("%d",&t);
    si=(float)p*r*t/100;
    printf("\nsimple intrest value=%f",si);
    getch();
}