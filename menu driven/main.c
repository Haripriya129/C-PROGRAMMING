#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,l,w,b,h,choice;
    float area;
    printf("input 1 for area of triangle \n");
    printf("input 2 for area of rectangle \n");
    printf("input 3 for area of circle \n");
    printf("input your choice:");
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:printf("input b and h");
               scanf("%d%d",&b,&h);
               area=0.5*b*h;
               break;
        case 2:printf("input l and b");
              scanf("%d%d",&l,&b);
              area=l*b;
              break;
        case 3:printf("input r");
              scanf("%d",&r);
              area=3.14*r*r;
              break;
        default:printf("\n invalid statement");
    }
    printf("the area is :%f",area);

}
