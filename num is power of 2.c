#include<stdio.h>
#include<math.h>
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  if(n==pow(2,(n/2)))
  {
      printf("YES");
  }
  else
  {
      printf("NO");
  }
  return 0;
}
