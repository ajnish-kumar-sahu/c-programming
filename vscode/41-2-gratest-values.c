/*Accept 2 values and find the gratest values*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b;
    printf("enter 2 values:-");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("a greatest value=%d",a);
    else
    printf("a greatest vvalue=%d",b);
    getch();
}