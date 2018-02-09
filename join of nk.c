#include<stdio.h>
#include<string.h>
int main()
{
  char a[10],b[10];
  printf("Enter two string:");
  scanf("%s\t%s",a,b);
  strcat(a,b);
  printf("%s",a);
  return 0;
}
