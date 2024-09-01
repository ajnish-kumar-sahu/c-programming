/*Accept a values if value will be odd then other wise cube value*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("enter a value");
    scanf("%d",&a);
    if(a%2==1)
    printf("a squar value=%d",a*a);
    else
    printf("a cube value=%d",a*a*a);
    getch();
}