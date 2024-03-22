#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height=7;
    int width=5;
    int perimeter;
    int area;
    perimeter=2*(width+height);
    printf("perimeter of the rectangle=%d\n",perimeter);
    area=height*width;
    printf("area of the rectangle=%d",area);
    return 0;
}
