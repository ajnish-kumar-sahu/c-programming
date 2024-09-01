#include<stdio.h>
#include<conio.h>
void main()
{
    enum var1{x,y,z};
    enum var2{A=10,B,C};
    enum var3{a=2,b=3,c=4};
    printf("x=%d",x);
    printf("\ny=%d",y);
    printf("\nz=%d",z);
    printf("\na=%d",a);
    printf("\nb=%d",b);
    printf("\nc=%d",c);
    printf("\nA=%d",A);
    printf("\nB=%d",B);
    printf("\nC=%d",C);
    printf("\nsum of var1 enum=%d",(x+y+z));
    getch();
}