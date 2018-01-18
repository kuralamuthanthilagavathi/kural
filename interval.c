#include <stdio.h>
void main()
{
    int num, sum , count;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d",&num, &sum);

    printf("Prime numbers between %d and %d are: ",num, sum);

    while (num < sum)
    {
        count = 0;

        for(i = 2; i <= num/2; ++i)
        {
            if(num % i == 0)
            {
                count = 1;
                break;
            }
        }

        if (count == 0)
            printf("%d ", num);

        ++num;
    }
}
