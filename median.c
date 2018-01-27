#include <stdio.h>
#include<string.h>
int main()
{
	int a[15],n;
	int i,j;
  printf("Enter the no of elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<=n;i++)
  {
  scanf("%d",&a[i]);
  }
	printf("sorted elements are");
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
	printf("Median element is %d",a[(n-1)/2]);
	return 0;
}
