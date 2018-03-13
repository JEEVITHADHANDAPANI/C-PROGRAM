#include <stdio.h>
#include<string.h>
int main()
{
	int a[15],n,b[15];
	int i,j,k,count=0;
  printf("Enter the no of elements\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<=n;i++)
  {
  scanf("%d",&a[i]);
  }
  k=0;
  for(i=0;i<n;i++)
	{
	    b[k]=a[i];
	    k++;
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
	for(i=0,k=0;i<n,k<n;i++,k++)
	{
	    if(a[i]==b[k])
	    {
	        count++;
	    }
	}
	if(count==n)
	{
	   printf("YES\n"); 
	}
	else
	{
	    printf("NO\n");
	}

	return 0;
}
