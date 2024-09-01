/*Write a program for displiying the designation according to the salary*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int s;
    printf("Enter a salary:");
    scanf("%d",&s);
    if(s>=50000&&s<=60000)
    printf("Director");
    else
    if("s>40000")
    printf("Deputy director");
    else
    if("s>30000")
    printf("Manager");
    else
    if("s>20000")
    printf("Engineer");
    else
    if("s>10000")
    printf("Office assitant");
    else
    printf("pean");
    getch();
}