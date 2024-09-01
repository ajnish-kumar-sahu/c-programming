/*Accept a value and convert it into 1/4th of the value without using division operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a value:-");
    scanf("%d",&n);
    n=n>>2;
    printf("the values of 1/4th =%d",n);
    getch();
}