#include<stdio.h>
#include<math.h>
int main()
{
  int n,a,c,d;
  printf("Enter the number");
  scanf("%d",&n);
  a=n/2;
  c=pow(2,a);
  if(c>n)
  {
    printf("%d",c);
  }
  else
  {
    ++a;
    d=pow(2,a);
    printf("%d",d);
  }
}
