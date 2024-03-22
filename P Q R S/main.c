#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,q,r,s;
    printf("enter p value");
    scanf("%d",&p);
    printf("enter q value");
    scanf("%d",&q);
    printf("enter r value");
    scanf("%d",&r);
    printf("enter s value");
    scanf("%d",&s);
    if((q>r)&&(s>p)&&((r+s)>(p+q))&&(r>0)&&(s>0)&&(p%2==0))
    {

        printf("\n correct value");
    }
    else{
        printf("\n wrong value");
    }
    return 0;
}
