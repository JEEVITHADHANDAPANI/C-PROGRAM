#include<stdio.h>
int main()
{
int a[10],n,k,i,flag=0;
printf("Enter no of elements and k:");
scanf("%d\t%d",&n,&k);
printf("enter elements");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
if(a[i]==k)
{
flag=1;
}
}
if(flag==1)
{
printf("YES");
}
else
{
printf("no");
}
return 0;
}
