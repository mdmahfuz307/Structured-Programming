<<<<<<< HEAD
//Write a C program to find all factors of a number
#include <stdio.h>
int main()
{
    int i, num;

    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    printf("All factors of %d are: \n", num);

    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }

    return 0;
=======
//Write a C program to find all factors of a number
#include <stdio.h>
int main()
{
    int i, num;

    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    printf("All factors of %d are: \n", num);

    for(i=1; i<=num; i++)
    {
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }

    return 0;
>>>>>>> d5f58025aff928a576fb4a5967d7d9b32168aafd
}