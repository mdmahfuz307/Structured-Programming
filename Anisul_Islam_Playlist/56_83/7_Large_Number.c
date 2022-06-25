//Large number
#include<stdio.h>
int main ()
{
    int num1, num2;
    printf("Enter the frist number :");
    scanf("%d",&num1);

    printf("Enter the second number :");
    scanf("%d",&num2);

    if(num1>num2)
    printf("Large = %d\n",num1);

    else if (num1<num2)
    printf("Large = %d\n",num2);

    else
    printf("Numbers are equal");
    return 0;
}