#include<stdio.h>
void input(int *a,int *b,int *c)
{
  printf("enter three numbers=");
  scanf("%d%d%d",a,b,c);
}
int cmp(int a, int b,int c,int *large)
{
  if(a>=b && a>=c)
    *large=a;
  else if(b>=a && b>=c)
    *large=b;
  else  
    *large=c;
  return *large;

}
int output(int large)
{
  printf("the largest number among three is %d",large);
}
int main()
{
  int n1,n2,n3,l;
  input(&n1,&n2,&n3);
  cmp(n1,n2,n3,&l);
  output(l);
}