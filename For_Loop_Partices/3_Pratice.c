<<<<<<< HEAD
/*Write a program in C to display the pattern like right angle triangle with a number. The pattern
like :
1
12
123
1234*/
#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Input number of rows :");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
    printf("%d",j);
    printf("\n");
    }
return 0;
=======
/*Write a program in C to display the pattern like right angle triangle with a number. The pattern
like :
1
12
123
1234*/
#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Input number of rows :");
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
    printf("%d",j);
    printf("\n");
    }
return 0;
>>>>>>> d5f58025aff928a576fb4a5967d7d9b32168aafd
}