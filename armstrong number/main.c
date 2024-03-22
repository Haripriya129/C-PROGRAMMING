#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number,originalnumber,remainder,result=0;
   printf("enter a three digit number:");
   scanf("%d",&number);
   originalnumber=number;
   while(originalnumber!=0)
   {
       remainder=originalnumber%10;
       result=result+remainder*remainder*remainder;
       originalnumber=originalnumber/10;
   }
   if(result==number)
   {
       printf("%d is a armstrong number",number);
   }
   else{
       printf("it is  not an armstrong number");
   }
    return 0;
}
