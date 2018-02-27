#include<stdio.h>
int main()
{
    int a[40],n,k,i,j,b[10],t,x,y;
    printf("Enter n and k:\n");
    scanf("%d\t%d",&n,&k);
    printf("Enter n values:\n");
    for(i=1;i<=n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter k values:\n");
    for(j=1;j<=k;j++)
    {
        scanf("%d",&b[j]);
    }
    j=1;
    for(i=n+1;i<=(n+k);i++)
    {
        a[i]=b[j];
        j++;
    }
    for(x=1;x<(n+k);x++)
    {
      for(y=i+1;y<=(n+k);y++)
      {
        if(a[x]>a[y])
        {
          t=a[x];
          a[x]=a[y];
          a[y]=t;
        }
        }
      }
   printf("%d",a[(n+k)]);
    return 0;
}
