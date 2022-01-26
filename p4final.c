#include<stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  int largest;
  if(a>=b && a>=c)
    largest=a;
  else if(b>=a && b>=c)
    largest=b;
  else
    largest=c;
  return largest;
}
void output(int largest)
{
  printf("the largest number amoung three numbers is %d",largest);
}
int main()
{
  int a,b,c,l;
  printf("enter three numbers=");
  a=input();
  b=input();
  c=input();
  l=cmp(a,b,c);
  output(l);
}