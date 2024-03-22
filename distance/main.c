#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int x1,x2,y1,y2;
    float distance;
    printf("enter the values");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    distance=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("distance b/w the said points=%f",sqrt(distance));
    return 0;
}
