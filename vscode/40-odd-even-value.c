/*Accept a value and check whether it is odd or even value*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter a value:-");
    scanf("%d",&a);
    if(a%2==0)
    printf("even values");
    else
    printf("odd values");
    getch();
}