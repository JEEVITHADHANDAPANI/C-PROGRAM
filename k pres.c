#include<stdio.h>
int main()
{
    int a[10],n,k,i,flag=0;
    printf("Enter n and k:\n");
    scanf("%d\t%d",&n,&k);
    printf("Enter n values:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
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
        printf("NO");
    }
    return 0;
}
