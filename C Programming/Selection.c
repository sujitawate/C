#include<stdio.h>

int main()
{
   int No = 0;

   printf("Enter Number:\n");
   scanf("%d",&No);
   
   if((No % 2)==0)
   {
     printf("It's a even number \n");

   }
   else
   {
    printf("It's a odd number \n");
   }
   return 0;
}