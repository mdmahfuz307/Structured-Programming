#include <stdio.h>
int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks for students %d : ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the value of marks for students %d is %d\n", i + 1, marks[i]);
    }
    return 0;
}