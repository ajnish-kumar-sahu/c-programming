/*Accept 2 values if 2nd values greater then 1st values then find the sum of square of accepted values*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,s;
    printf("enter 2 values");
    scanf("%d%d",&a,&b);
    if(b>a)
    {
        s=a*a+b*b;
        printf("sum of squar of value=%d",s);
    }
    getch();
}