<<<<<<< HEAD
//Write a C program to calculate sum of digits of a number.
#include<stdio.h>
int main()
{
    int num,sum=0,r;

    printf("Enter a numer :");
    scanf("%d",&num);

    while(num)
    {
        r=num%10;
        num=num/10;
        sum=sum+r;
    }
    printf("Sum of Digits of Number : %d",sum);

return 0;
=======
//Write a C program to calculate sum of digits of a number.
#include<stdio.h>
int main()
{
    int num,sum=0,r;

    printf("Enter a numer :");
    scanf("%d",&num);

    while(num)
    {
        r=num%10;
        num=num/10;
        sum=sum+r;
    }
    printf("Sum of Digits of Number : %d",sum);

return 0;
>>>>>>> d5f58025aff928a576fb4a5967d7d9b32168aafd
}