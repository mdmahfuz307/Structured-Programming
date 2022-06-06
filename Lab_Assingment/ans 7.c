#include <stdio.h>///7.Write a C program to print prime number from 1 to 200
  int main() {
    int i, j, flag, ip = 0;
    printf("The prime numbers between 1 to 200 are:\n");
    for (i = 2; i < 199; i++) 
    {
      flag = 1;
      for (j = 2; j <= i / 2 && flag == 1; j++) 
      {
        if (i % j == 0) {
          flag = 0;
        }
      }
      if (flag == 1) 
      {
        printf("%5d ", i);
        ip++;
        if (ip % 10 == 0) 
        {
          printf("\n");
        }
      }
    }
    printf("\n");
    return 0;
  }
