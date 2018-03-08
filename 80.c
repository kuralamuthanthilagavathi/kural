#include<stdio.h>
int main()
{
    int n,m,i;
    printf("Enter the lower limit:");
    scanf("%d",&n);
    printf("Enter the upper limit:");
    scanf("%d",&m);
    for(i=n;i<=m;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
return 0;
}
