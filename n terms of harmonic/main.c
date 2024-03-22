#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n;
   float sum=0.0;
   printf("input the number of terms:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(i<n)
       {
           printf("1/%d+",i);
           sum=sum+1/(float)i;

       }
       if(i==n)
       {
           printf("1/%d",i);
           sum=sum+1/(float)i;
       }
   }
   printf("\n sum of series up to %d terms%f \n",n,sum);
    return 0;
}
