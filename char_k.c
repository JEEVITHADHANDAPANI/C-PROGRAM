#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char str[20],k;
    int i,l;
    printf("Enter the string:\n");
    gets(str);
    printf("Enter a character:\n");
    scanf("%c",&k);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]==k)
        {
         printf("%d\t",i+1);
        } 
        
   }
    return 0; 
}
