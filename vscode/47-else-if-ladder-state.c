/*write a program for displaying the grade which is obtained by student in the exam*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("Enter a marks:");
    scanf("%d",&marks);
    if(marks>=90)
    printf("outstanding");
    else
    if(marks>=80&&marks<=89)
    printf("Excellent");
    else
    if(marks>=70&&marks<=79)
    printf("Very good");
    else
    if(marks>=60&&marks<=69)
    printf("Good");
    else
    if(marks>=50&&marks<=59)
    printf("Average");
    else
    printf("Fail");
    getch();
}