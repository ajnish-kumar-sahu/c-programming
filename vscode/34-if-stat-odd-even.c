/*Accept a value and check the odd or even value*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,r;
    printf("enter a value:-");
    scanf("%d",&a);
    r=a%2;
    if(r==0)
    {
        printf("value is even");
    }
    if(r==1)
    {
        printf("value is odd");
    }
    getch();
}