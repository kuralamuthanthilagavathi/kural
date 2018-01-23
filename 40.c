#include<stdio.h>
void fib(int n)
{
   if (n <= 1)
printf("The value of n");  
return fib(n-1) + fib(n-2);
}
 
void main ()
{
  int n = 9;
  printf("%d", fib(n));
  getchar();
}
