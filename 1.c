#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],b[20];
    int k,l,i,j=0,count=0;
    scanf("%s",s);
    l=strlen(s);
    scanf("%d",&k);
    for(i=l-k;i<l;i++)
    {
        b[j]=s[i];
        j++;
        count++;
    }
    i=0;
    for(j=k;j<l;j++)
    {
        b[j]=s[i];
        i++;
    }
   for(j=0;j<l;j++)
   {
       printf("%c",b[j]);
   }
    return 0;
    }
