// 1+3+5+..........+n
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the last number of the series :");
    scanf("%d", &n);
    printf("1+3+5+....+ %d", n);

    for (i = 1; i <= n; i = i + 2)
    {
        sum = sum + i; // sum = 3
    }
    printf("= %d\n", sum);

    return 0;
}