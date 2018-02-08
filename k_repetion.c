#include<stdio.h>
int main()
{
int b[10],n,k,i,flag=0;
printf("Enter no of elements and k:\n");
scanf("%d\t%d",&n,&k);
printf("enter elements\n");
for(i=1;i<=n;i++)
{
scanf("%d",&b[i]);
}
for(i=1;i<=n;i++)
{
if(b[i]==k)
{
flag++;
}
}
printf("%d",flag);
return 0;
}
