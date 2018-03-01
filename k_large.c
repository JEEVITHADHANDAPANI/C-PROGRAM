#include <stdio.h>
#include<string.h>
int main()
{
	int c[15],n,k;
	int i,j;
  printf("Enter the no of elements and k");
  scanf("%d\t%d",&n,&k);
  printf("Enter the elements");
  for(i=0;i<=n;i++)
  {
  scanf("%d",&c[i]);
  }
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(c[i]<c[j])
		{
			int t=c[i];
			c[i]=c[j];
			c[j]=t;
			}
		}
	}
printf("%d",c[k]);
return 0;
}
