// A, F & C to determine the display of numbers from 1 to n
#include <stdio.h>
int main()
{
    int n, i;

    printf("Entr Number :");
    scanf(" %d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}