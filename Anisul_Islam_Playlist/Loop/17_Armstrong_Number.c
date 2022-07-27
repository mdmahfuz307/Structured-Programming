// Armstrong Number
#include <stdio.h>
int main()
{
    int num, r, temp, sum = 0;

    printf("Enter any number :");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + r * r * r;
        temp = temp / 10;
    }
    if (sum == num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}