/******************************************
 * 教材112页习题7
 * calculate the approximative value of pi
 ******************************************/


#include<stdio.h>
int main()
{
  double i,j,PI=2;
  for (i=1;i<=1000;i++)
    {
      j = (2*i)*(2*i)/((2*i-1)*(2*i+1));
      PI *= j;
    }
  printf("PI = %8.7lf\n",PI);
  return 0;
}
