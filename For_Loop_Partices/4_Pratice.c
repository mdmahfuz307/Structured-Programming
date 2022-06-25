<<<<<<< HEAD
//Write a C program to calculate the factorial of a given number
#include <stdio.h>
int main(){
  int i,f=1,num;

  printf("Input the number : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      f=f*i;

  printf("The Factorial of %d is: %d\n",num,f);
=======
//Write a C program to calculate the factorial of a given number
#include <stdio.h>
int main(){
  int i,f=1,num;

  printf("Input the number : ");
  scanf("%d",&num);

  for(i=1;i<=num;i++)
      f=f*i;

  printf("The Factorial of %d is: %d\n",num,f);
>>>>>>> d5f58025aff928a576fb4a5967d7d9b32168aafd
}