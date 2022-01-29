#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("Enter any number=");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)//5
{
  float x=n/2;  //2.5
  float sq;
  sq=0.5*(x+(n/x));//0.5*(2.5+2)=0.5*4.5=2.25;
  while(fabs(x-sq)>0.000001)//2.5-2.25=0.25>0.000001
  {
    x=sq;
    sq=0.5*(x+(n/x));//0.5*(2.25+2.222)=2.236
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