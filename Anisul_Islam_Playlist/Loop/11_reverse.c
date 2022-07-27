//Print reverse of the table for a number n.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter Numbers :");
    scanf("%d\n",&n);

    for(int i=10; i>=1; i--){
        printf("%d\n",n*i);
    }
return 0;
}