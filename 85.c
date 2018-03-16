#include<stdio.h>
int main()
{
int a[20],i,n;
printf("Enter the string:");
scanf("%c",a);
n-strlen(a);
for(i=0;i<=n;i++)
{
if(i%2==0)
{
printf("%c",a[i]);
}
}
printf(" ");
for(i=0;i<=n;i++)
{
if(i%2==1)
{
printf("%c",a[i]);
}
}
return 0;
}
