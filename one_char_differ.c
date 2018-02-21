#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int l1,l2,i,j,count=0;
    printf("Enter 2 strings\n");
    scanf("%s\t%s",s1,s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0,j=0;i<l1,j<l2;i++,j++)
    {
        if(s1[i]!=s2[j])
        {
            count=count+1;
        }
    }
    if(count==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
