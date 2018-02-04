#include<stdio.h>
#include<string.h>
int main()
{
  char str1[50],str2[50];
  int l,a,i,j,count=0;
  printf("Enter the two string");
  scanf("%s\n%s",str1,str2);
  l=strlen(str1);
  a=strlen(str2);
  for(i=1;i<=l;l++)
  {
    for(j=1;j<=a;j++)
    {
      if(str1[i]==str2[j])
      {
        count++;
      }
    }
  }
  if(count==l&&count==a)
  {
  printf("%s",str1);
  }
  else
  {
    if(l>a)
    {
      printf("%s",str1);
    }
    else
    {
      printf("%s",str2);
    }
  }
  return 0;
}
