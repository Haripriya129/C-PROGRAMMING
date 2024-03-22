#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("enter n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

        printf("%d",i*2);//2468 10
        sum=sum+(i*2);//26 12 20 30
    }
    printf("the sum of even natural numbers is %d",sum);
    return 0;
}
