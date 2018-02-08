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
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	 if(a[i]==a[j])
	 {
	     printf("%d\t",a[i]);
	 }
	 	 }
	}

	return 0;
}
