#include<stdio.h>
void main()
{
    int a,b,c,x,y,z;
    printf("Enter the values:");
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("%d\n",c);
    printf("Enter the values:");
    scanf("%d%d",&a,&b);
    c=a%b;
    printf("%d\n",c);
    printf("Enter the x and y values:");
    scanf("%d%d",&x,&y);
    z=x/y;
    printf("%d\n",z);
    printf("Enter the values:");
    scanf("%d%d",&x,&y);
    z=x%y;
    printf("%d\n",z);
}
