#include<stdio.h>
int i;
int input_array_size()
{
  int n;
  printf("enter array size=");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("enter numbers=");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_n_arrays(int n,int a[n])
{
  int sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
int output(int n,int a[n],int sum)
{
  for(i=0;i<n-1;i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d",a[n-1],sum);
}
int main()
{
  int a=input_array_size();
  int b[a];
  input_array(a,b);
  int c=sum_n_arrays(a,b);
  output(a,b,c);

}