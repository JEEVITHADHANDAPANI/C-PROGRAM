#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[20]=" Answer";
    int i,j,l,m;
    scanf("%[^\n]s",a);
    i=strlen(a);
   // printf("%d",m);
    for(j=0;b[j]!='\0';j++)
    {
        a[i]=b[j];
        i=i+1;
    }
    printf("%s",a);
    return 0;
}
