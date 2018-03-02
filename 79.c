#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i= 0; i<= n; i++)
    {
        if (n == i * i)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
