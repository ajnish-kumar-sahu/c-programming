/*working with bitwise operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=5,b=14;
    printf("a=%d\nb=%d",a,b);
    printf("\na&b=%d",(a&b));
    printf("\na|b=%d",(a|b));
    printf("\na<<1=%d",(a<<1));
    printf("\na>>1=%d",(a>>1));
    printf("\n~a=%d",(~a));
    printf("\na^b=%d",(a^b));
    getch();
}