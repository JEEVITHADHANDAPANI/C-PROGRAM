#include<stdio.h>
int main()
{
  int n,k,a[10],i,j=0,b[10],t,x,o=0;
  printf("Enter the n and k:\n");
  scanf("%d\t%d",&n,&k);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]<k)
    {
     b[j]=a[i];
     j++;
     o++;
    }
  }
  for(j=0;j<o-1;j++)
  {
    for(x=j+1;x<o;x++)
    {
      if(b[j]>b[x])
      {
        t=b[j];
        b[j]=b[x];
        b[x]=t;
      }
    }
  }
  for(j=0;j<o;j++)
  {
    printf("%d\t",b[j]);
  }
}
