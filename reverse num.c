#include<stdio.h>
#include<string.h>
void main()
{
  int n,j,t,sum=0;
  printf("Enter the number");
  scanf("%d",&n);
  while(n!=0)
  {
    t=n%10;
    sum=sum*10+t;
    n=n/10;
  }
  printf("Reversed number is%d",sum);
  return 0;
}
