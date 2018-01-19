#include<stdio.h>
#include<math.h>
void main()
{
int i, low ,high,count1,count2,num,n=0,res=0;
printf("Enter the two numbers(intervals):");
scanf("%d%d",&low,&high);
printf("Armstrong number between %d and %d",low,high);
    for(i = low + 1; i < high; ++i)
    {
        count2 = i;
        count1 = i;
        while (count1 != 0)
        {
            count /= 10;
            ++n;
        }

        while (count2 != 0)
        {
            num = count2 % 10;
            res += pow(num, n);
            count /= 10;
        }

        if (res == i) {
            printf("%d ", i);
        }

        n = 0;
        res = 0;

    }
}
