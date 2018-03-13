#include<stdio.h>
#include<string.h>
int main()
{
 char a[20],t;
 int i,l;
 printf("Enter string:");
 scanf("%[^\n]s",a);
 l=strlen(a);
 for(i=0;i<l;i++)
 { 
    if(i%2==0)
         {
         t=a[i];
         a[i]=a[i+1];
         a[i+1]=t;

 }
 printf("%s",a);
 return 0;
}
