#include<stdio.h>
int main()
{
int i,t1=0,t2=1,n,fib;
printf("Enter the terms:");
scanf("%d",&n);
printf("The fibonacci series are:",t1);
for(i=0;i<=n;++i)
{
printf("%d, ",t1);
fib=t1+t2;
t1=t2;
t2=fib;
}
return 0;
}
