// Armstrong Number
#include <stdio.h>
int main()
{
    int initialnum, fainalnum, r, i, temp, sum = 0;

    printf("initial value :");
    scanf("%d", &initialnum);

    printf("Fainal value :");
    scanf("%d", &fainalnum);

    for (i = initialnum; i <= fainalnum; i++)
    {

        temp = i;

        while (temp != 0)
        {
            r = temp % 10;
            sum = sum + r * r * r;
            temp = temp / 10;
        }
        if (sum == i)
            printf("%d\n", i);
        sum = 0;
    }

    return 0;
}