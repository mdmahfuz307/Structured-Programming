// Goto Statement
#include <stdio.h>
void main()
{
    int i = 1;

nirob:

    printf("%d\t", i);
    i++;

    if (i < 5)

        goto nirob;
}