///6.Write a program in C to display the n terms of even natural number and their sum.


#include <stdio.h>

int main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe even numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i);
     sum+=2*i;
   }
   printf("\nThe Sum of even Natural Number upto %d terms : %d \n",n,sum);
   
   return 0;
} 
