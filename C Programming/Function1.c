#include<stdio.h>


int Add(int A, int B)
{
  int Result = 0;

      Result = A + B ;

  return Result ;

}

int main ()
{
  int NO1 = 20;
  int NO2 = 44;
  int Ans = 0;

  Ans = Add(NO1,NO2);

  printf("Addtion of given two number is : %d", Ans);

  return 0;
}