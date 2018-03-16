#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str[20],k;
    int i,l,count=0;
    printf("Enter the string:\n");
    gets(str);
    printf("Enter a character:\n");
    scanf("%c",&k);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==k)
        {
         count++;
        } 
    }
    printf("%d",count);
    return 0; 
}
