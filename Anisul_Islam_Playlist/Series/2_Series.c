// 1+2+3+..........+n
#include <stdio.h>
int main()
{
    int n, sum = 0, a = 1;
    printf("Enter the last number of the series :");
    scanf("%d", &n);
    printf("1+2+3+....+ %d", n);

    while (a <= n)
    {
        sum = sum + a;
        a = a + 1;
    }

    printf("= %d\n", sum);

    return 0;
}