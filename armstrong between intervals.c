#include<stdio.h>
int main()
{
  int a,b,sum,t,i,n;
  printf("Enter the intervals:");
  scanf("%d\t%d",&a,&b);
  for(i=a;i<=b;i++)
  {
    sum=0;
    n=i;
    while(n!=0)
    {
      t=n%10;
      sum=sum+(t*t*t);
      n=n/10;
    }
    if(sum==i)
    {
      printf("%d",i);
    }
  }
  return 0;
}
