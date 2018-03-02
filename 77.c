#include <stdio.h>
int main()
{
    int n, s;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    printf("Factors of %d are: ", n);
    for(s=1; s <= n; s++)
    {
        if (n%s == 0)
        {
            printf("%d ",s);
        }
    }

    return 0;
}
