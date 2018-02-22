#include <stdio.h>
#include<string.h>
int main()
{
	int b[15],a;
	int i,j;
  printf("Enter the no of elements");
  scanf("%d",&a);
  printf("Enter the elements");
  for(i=0;i<a;i++)
  {
  scanf("%d",&b[i]);
  }
  for(i=0;i<a-1;i++)
	{
		for(j=i+1;j<a;j++)
		{
			if(b[i]>b[j])
		{
			int t=b[i];
			b[i]=b[j];
			b[j]=t;
			}
		}
	}
	printf("\n minimum element is %d",b[0]);
	return 0;
}
