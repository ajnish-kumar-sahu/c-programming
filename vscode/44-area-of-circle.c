/*Accept a values if value will be even then 
find the area of the triangle otherwise area of the circle*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    float area,b,h;
    printf("enter a value");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("enter values of base and hight of the trinagle");
        scanf("%f%f",&b,&h);
        area=0.5*b*h;
        printf("\nArea of triangle=%f",area);
    }
    else
    {
        printf("enter a radius values");
        scanf("%f",&b);
        area=3.14*b*b;
        printf("\nArea of circle=%f",area);
    }
    getch();
}