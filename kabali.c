#include<stdio.h>
int main()
{
  int a[5],b[5],n;
  printf("Enter the total number of line");
  scanf("%d",&n);
  printf("Enter a and b value");
  for(int i=1;i<=n;i++)
  {
    scanf("%d\t%d",&a[i],&b[i]);
  }
  printf("\n");
for(int i=1;i<=n;i++)
{
  printf("%d",(b[i]-a[i]));
  printf("\n");
}
  return 0;
}
