#include<stdio.h>
int main()
{
    int N,R,L;
    printf("Enter the number:");
    scanf("%d",&N);
    printf("Enter the number:");
    scanf("%d",&L);
    printf("Enter the number:");
    scanf("%d",&R);
    if(L<N<R||R<N<L)
    {
        printf("YES");
    }
    else
    {
        printf("No");
        }
    return 0;
    }
