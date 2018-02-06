#include<stdio.h>
#include<string.h>
int main()
{
  char a[10];
  int l=0,i,n;
  printf("Enter the string:");
  scanf("%s",a);
  printf("Enter the number:");
  scanf("%d",&n);
  l=strlen(a);
  for(i=l-1;i>n;i--)
  {
    printf("%c",a[i]);
  }
  return 0;
}
