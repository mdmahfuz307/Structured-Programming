// Break and continue statements
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (i == 8) // skip
            continue;
        printf("%d\n", i);

        if (i == 10)
            break;
    }
    return 0;
}