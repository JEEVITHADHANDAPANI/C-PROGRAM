#include<stdio.h>
int main()
{
  int p[20],n,i,j,t[20],k=0;
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
      if(p[i]==p[j])
      {
        printf("%d",p[i]);
      }
    }
    }
    
  return 0;
}
