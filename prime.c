#include <stdio.h>
void main()
{
    int n, i, num = 0;

    printf("Enter an integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
           num=1;
        }
    }

    if (num==0)
    {
        printf("%d is a prime number.",n);
    }
    else
    {    
    printf("%d is not a prime number.",n);
    }
}
