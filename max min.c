#include <stdio.h>
#include<string.h>
int main()
{
	int b[15],n;
	int i,j;
  printf("Enter the no of elements");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<=n;i++)
  {
  scanf("%d",&b[i]);
  }
	printf("sorted elements are\n");
	for(i=0;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(b[i]>b[j])
		{
			int t=b[i];
			b[i]=b[j];
			b[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\nMaximum element is %d",b[n-1]);
	printf("\n minimum element is %d",b[0]);
	return 0;
}
