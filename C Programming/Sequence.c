#include<stdio.h>

int main()
{
   int No1 = 0, No2 = 0, Ans = 0;

   printf("Enter the first number\n");
   scanf("%d", &No1);

   printf("Enter the second number\n");
   scanf("%d", &No2);

   Ans = No1 + No2;

   printf("Addition is %d \n", Ans);

   return 0;
}