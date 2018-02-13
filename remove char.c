#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int i,l,j;
    printf("Enter string:");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l-1;i++)
    {
        for(j=i+1;j<l;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='\0';
            }
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}
