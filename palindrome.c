#include<stdio.h>
void main()
{
int n,sum=0,num,rem;
{
printf("Enter the integer:");
scanf("%d",&n);
}
rem=n;
while(n!=0)
{
num=n%10;
sum=sum*10+num;
n=n/10;
}
if(rem==sum)
{
printf("%d is a palindrome:",rem);
}
else
{
printf("%d is not a palindrome:",sum);
}
}
