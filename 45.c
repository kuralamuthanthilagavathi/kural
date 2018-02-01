#include<stdio.h>
int main()
{
int long n;
int count=0;
printf("Enter the numbers:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("Number of digits:%d",count);
return 0;
}
