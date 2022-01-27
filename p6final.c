#include<stdio.h>
int input_n()
{
  int n;
  printf("enter n =");
  scanf("%d",&n);
  return n;
}
int sum(int n)
{
  int i,sum=0;
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
void output(int n,int sum)
{
  int i;
  for(i=1;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d",i,sum);
}
int main()
{
  int a=input_n();
  int su=sum(a);
  output(a,su);
}