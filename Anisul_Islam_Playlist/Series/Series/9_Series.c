// 1*2*3*......*n
#include <stdio.h>
int main()
{
    int i, n, result = 1;
    printf("Enter n =");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }
    printf("result = %d\n", result);

    return 0;
}