#include <stdio.h>
int main()
{
    int marks[4]; // allocate space for 4 integer

    printf("Enter the value of marks for students 1 :");
    scanf("%d", &marks[0]);
    printf("Enter the value of marks for students 2 :");
    scanf("%d", &marks[1]);
    printf("Enter the value of marks for students 3 :");
    scanf("%d", &marks[2]);
    printf("Enter the value of marks for students 4 :");
    scanf("%d", &marks[3]);

    printf("You have entered %d %d %d and= %d", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}