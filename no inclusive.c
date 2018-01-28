#include<stdio.h>
int main()
{
  int x;
  printf("Enter the number:");
  scanf("%d",&x);
  if(x>=0&&x<=9)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
  return 0;
}
