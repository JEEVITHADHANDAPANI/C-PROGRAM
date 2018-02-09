#include<stdio.h>
int main()
{
  int n,a[10],i,j,count=0;
  printf("Enter no of elements:");
  scanf("%d",&n);
  printf("Enter elements:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==i)
    {
      printf("%d\t",a[i]);
    }
    else
    {
      count++;
    }
  }
 if(count==n)
 {
   printf("-1");
 }
  return 0;
}
