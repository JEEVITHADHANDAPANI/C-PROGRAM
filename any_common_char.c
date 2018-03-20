#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int i,j,l,m,count=0;
    printf("Enter the String1:\n");
    scanf("%s",&a);
    printf("Enter the string2:\n");
    scanf("%s",&b);
    l=strlen(a);
    m=strlen(b);
    for(i=0;i<l;i++)
    {
      for(j=0;j<m;j++)
      {
        if(a[i]==b[j])
        {
            count++;
        }
      }
    }
    if(count>=1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
