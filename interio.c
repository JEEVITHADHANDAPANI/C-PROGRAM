#include<stdio.h>
int main()
{
   int a,b,c,d;
   printf("Enter a,b,c:\n");
   scanf("%d\t%d\t%d",&a,&b,&c);
   d=a+b+c;
   if(d==180)
   {
       printf("Interior angle\n");
   }
   else
   {
       printf("Not a interior angle\n"); 
   }
    return 0;
}
