#include<stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int sum=a+b;
  return sum;
}
void output(int a,int b,int sum)
{
  printf("sum of %d and %d is %d",a,b,sum);
}
int main()
{
  printf("enter first number=");
  int a=input();
  printf("enter second number=");
  int b=input();
  int sum=add(a,b);
  output(a,b,sum);
  return 0;
}
