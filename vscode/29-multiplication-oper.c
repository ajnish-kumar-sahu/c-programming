/*accept a value and find the result of it's 4 time without using multiplication operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("enter a value:-");
    scanf("%d",&n);
    n=n<<2;
    printf("the value of 4th time =%d",n);
    getch();
}