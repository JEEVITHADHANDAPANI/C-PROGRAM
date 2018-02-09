#include<stdio.h>
int main()
{
int a[10],n,k,i,flag=0,b[10],j=0;
printf("Enter no of elements and k:\n");
scanf("%d\t%d",&n,&k);
printf("enter elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2!=0)
{
b[j]=a[i];
  j++;
}
}
printf("kth odd number is:%d",b[k]);
return 0;
}
