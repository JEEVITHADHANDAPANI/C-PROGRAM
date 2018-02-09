#include<stdio.h>
int main()
{
  int p[20],n,i,j;
  int t;
  printf("Enter no of elements:");
  scanf("%d",&n);
  printf("Enter elements:");
  for(i=1;i<=n;i++)
  {
    scanf("%d",&p[i]);
  }
   for(i=1;i<=n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(p[i]>p[j])
      {
        t=p[i];
        p[i]=p[j];
        p[j]=t;
      }
    }
  }
  printf("sorted elements:");
   for(i=1;i<=n;i++)
  {
    printf("%d",p[i]);
  }
  for(i=1;i<=n-1;i++)
  {
    for(j=i+1;j<=n;j++)
    {
      if(p[i]==p[j])
      {
        printf("\n%d\n",p[i]);
      }
    }
    }
    
  return 0;
}
