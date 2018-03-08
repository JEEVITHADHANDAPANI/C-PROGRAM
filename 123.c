#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],str1[30];
    int i,j=0,l;
    printf("Enter String:\n");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!='a'||a[i]!='e'||a[i]!='i'||a[i]!='o'||a[i]!='u')
        {
            str1[j]=a[i];
            j++;
        }     
    
    }
    
    
    printf("%s",str1);
   
    return 0;
}
