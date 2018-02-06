#include<stdio.h>
int main()
{
int n,m,c;
printf("Enter the first number:");
scanf("%d",&n);
printf("Enter the second number:");
scanf("%d",&m);
c=n*m;
if(c%2==0)
{
printf("%d is even number",c);
}
return 0;
}

