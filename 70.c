#include<stdio.h>
int main()
{
    int b=2,i,c;
    printf("%d",b);
    scanf("%d",&b);
    
    for(i=2;i<=5;i++)
    {
    c=pow(b,i);
    printf("%d",c);
    }
    return 0;
}
