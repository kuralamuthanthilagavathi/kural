#include<stdio.h>
int main()
{
    int t1,t2,d;
    printf("Enter the numbers:");
    scanf("%d%d",&t1,&t2);
    d=t1-t2;
    if(d%2==0)
    {
        printf("%d is even number.",d);}
    else{
        printf("%d is odd number.",d);
    }
    return 0;
}
