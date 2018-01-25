#include<stdio.h>
int main()
{
  int n,k,a[15],i;
  printf("Enter the numberand k value");
  scanf("%d\t%d",&n,&k);
  for(i=1;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=1;i<n;i++)
  {
  if(i==k)
  {
    printf("%d",a[i]);
  }
  }
  return 0;
}
