#include <stdio.h>
int main()
{
   int n;
   printf("Enter the number:");
   scanf("%d",&n);
   if(n%13==0)
   {
       printf("YES");
   }else
   {
       printf("NO");
   }
   return 0;
}