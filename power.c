#include<stdio.h>
void main()
{
int num,pow;
int solution=1;
{
printf("Enter the num:");
scanf("%d",&num);
}
{
printf("Enter the pow:");
scanf("%d",&pow);
}
while(pow!=0)
{
solution=num;
--pow;
}
printf("result=%11d",solution);
}
