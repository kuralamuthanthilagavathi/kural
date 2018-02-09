#include<stdio.h>
int main()
{
int n,m,r;
printf("Enter the first element:");
scanf("%d",&n);
printf("Enter the second element:");
scanf("%d",&m);
r=n+m;
if(r%2==0)
{
printf("The result is even");
}
else
{
printf("The result is odd");
}
return 0;
}
