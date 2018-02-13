#include <stdio.h>
#include<string.h>
int main()
{
	int a[15],n,x;
	int i,j;
  printf("Enter the no of elements\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<=n;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
	x=a[n-1]-a[0];
	printf("%d",x);
	return 0;
}
