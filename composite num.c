#include<stdio.h>
#include<string.h>
void main()
{
  int n,j,sum=0;
  printf("Enter the number");
  scanf("%d",&n);
  for(j=2;j<=n;j++)
  {
    if(n%j==0)
    {
      sum++;
    }
  }
  if(sum>=3)
  {
    printf("YES");
  }
  else
  {
    printf("no");
  }
  }
