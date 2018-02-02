#include<stdio.h>
#include<math.h>
int main()
{
  int n,a,c,i;
  printf("Enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(pow(2,i)==n)
    {
      c=pow(2,i+1);
      break;
    }
  }
  printf("%d",c);
  return 0;
}
