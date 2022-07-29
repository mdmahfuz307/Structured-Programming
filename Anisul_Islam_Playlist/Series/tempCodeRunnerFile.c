// Fibonacci Series
#include <stdio.h>
int main()
{
    int a = 0, b = 1, count = 0, fibo, n;

    printf("Enter Range :");
    scanf("%d", &n);

    while (count < n)
    {
        if (count <= 1)
        {
            fibo = count;
        }
        else
        {
            fibo = a + b;
            a = b;
            b = fibo;
        }
        printf("%d", fibo);
        count++;
    }

    return 0;
}