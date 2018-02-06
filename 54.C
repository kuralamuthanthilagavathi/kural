#include<stdio.h>
int main()
{
int n,i;
printf("Enter the number till :");
scanf("%d",&n);
printf("The even numbers from 1 to %d is:\n",n);
for(i=0;i<=n;i++)
{
if(i%2==0)
{
printf("%d\n",i);
}
}
return 0;
}
