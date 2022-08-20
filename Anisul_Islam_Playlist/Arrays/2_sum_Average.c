//Write a program that read 10 numbers and display their sum and average
#include <stdio.h>
int main()
{
    int a[10], sum = 0, i; // a[0],a[1]......a[9]

    printf("Enter 10 Numbers :");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    printf("the sum is :%d\n", sum);
    printf("The avarage is : %.2f\n", (float)sum / 10);

    return 0;
}