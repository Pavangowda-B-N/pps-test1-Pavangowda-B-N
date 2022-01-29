#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("Enter any number=");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float x=n/2;  
  float sq;
  sq=0.5*(x+(n/x));
  while(fabs(x-sq)>0.000001)
  {
    x=sq;
    sq=0.5*(x+(n/x));
  }
  return sq;
}
void output(float n,float sqrt_result)
{
  printf("square root of %f is %f",n,sqrt_result);
}
int main()
{
  float n=input();
  float s=my_sqrt(n);
  output(n,s);
}