#include <stdio.h>
#include<string.h>
int main()
{
	int a[15],m,y;
	int i,j;
  printf("Enter the no of elements\n");
  scanf("%d",&m);
  printf("Enter the elements\n");
  for(i=0;i<=m;i++)
  {
  scanf("%d",&a[i]);
  }
  for(i=0;i<=m-1;i++)
	{
		for(j=i+1;j<=m;j++)
		{
			if(a[i]>a[j])
		{
			int t=a[i];
			a[i]=a[j];
			a[j]=t;
			}
		}
	}
	y=m-0;
	printf("%d",y);
	return 0;
}
