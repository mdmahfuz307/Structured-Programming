<<<<<<< HEAD
//Write a program in C to display the n terms of odd natural number and their sum
#include<stdio.h>
int main()
{
    int i,num,sum = 0;

    printf("Enter number of terms :");
    scanf("%d",&num);

    printf("\n The Odd numbers are :");
    for(i=1;i<=num;i++)
    {
        printf("%d",2*i-1);
        sum = sum+2*i-1;
    }
    printf("\n The sum of odd Natural number upto %d terms : %d\n",num,sum);
return 0;

}
=======
//Write a program in C to display the n terms of odd natural number and their sum
#include<stdio.h>
int main()
{
    int i,num,sum = 0;

    printf("Enter number of terms :");
    scanf("%d",&num);

    printf("\n The Odd numbers are :");
    for(i=1;i<=num;i++)
    {
        printf("%d",2*i-1);
        sum = sum+2*i-1;
    }
    printf("\n The sum of odd Natural number upto %d terms : %d\n",num,sum);
return 0;

}
>>>>>>> e2f81e4dbd495fd66ce00f25c80516df13ffe453
