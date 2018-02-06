#include<stdio.h>
#include<string.h>
int main()
{
 
  int l=0,i,n;
  printf("Enter the number:");
  scanf("%d",&n);
  while(n%2==0)
  {
      i=n/2;
      printf("%d\t",i);
      n=i;
  }
  return 0;
}
