#include<stdio.h>

int main()
{
  int a[5],n,i,avg,sum=0;
  printf("Enter the no of elements:");
  scanf("%d",&n);
  printf("Enter elements");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++)
  {
    sum=sum+a[i];
  }
 avg=sum/n;
 printf("Average is %d",avg);
 return 0;
}
