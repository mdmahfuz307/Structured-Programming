//C program to determine whether leap year
#include<stdio.h>
int main()
{
    int years;

    printf("Enter any year :");
    scanf("%d",&years);

    if(years%400==0)
    printf("Leap Year");

    else if(years%4==0 && years%100!=0)
    printf("Leap year");

    else
    printf("Not Leap year");

getch();
}