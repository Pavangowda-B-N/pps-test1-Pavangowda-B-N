#include<stdio.h>
void input(int a,int b,int c)
{
  printf("please enter three numbers=");
  scanf("%d%d%d",&a,&b,&c);
}
int cmp(int a,int b,int c)
{
  if(a>b && b>c)
    return 1;
  else if(b>a && b>c)
    return -1;
  else
    return 0;
}
int output(int a,int b,int c,int largest)
{
  if(largest==1)
    printf("a is greater number ");
  else if(largest==-1)
    printf("b is greater number ");
  else
    printf("c is greater number ");
}
int main()
{
  input();
  int largest=cmp();

}