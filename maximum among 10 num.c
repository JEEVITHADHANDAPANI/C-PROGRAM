#include <stdio.h>
#include<string.h>
int main()
{
	int b[15],m;
	int i,j;
  printf("Enter the no of elements");
  scanf("%d",&m);
  printf("Enter the elements");
  for(i=0;i<=m;i++)
  {
  scanf("%d",&b[i]);
  }
	printf("sorted elements are\n");
	for(i=0;i<=m-1;i++)
	{
		for(j=i+1;j<=m;j++)
		{
			if(b[i]>b[j])
		{
			int t=b[i];
			b[i]=b[j];
			b[j]=t;
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\nMaximum element is %d",b[m]);
	return 0;
}
