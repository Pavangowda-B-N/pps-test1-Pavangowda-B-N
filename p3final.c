#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter two numbers=");
  scanf("%d%d",a,b);
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("sum of %d+%d is %d",a,b,sum);
}
int main()
{
  int num1,num2,addition;
  input(&num1,&num2);
  add(num1,num2,&addition);
  output(num1,num2,addition);
  return 0;
}