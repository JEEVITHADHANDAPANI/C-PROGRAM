#include<stdio.h>
int main()
{
    int a[100],n,i,j,k,b[100],x,y,count=0;
    scanf("%d\t%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<k)
        {
            b[j]=a[i];
            j++;
            count++;
        }
    }
    for(j=0;j<count-1;j++)
    {
        for(x=j+1;j<count;j++)
        {
            if(b[j]>b[x])
            {
                y=b[j];
                b[j]=b[x];
                b[x]=y;
            }
        }
    }
    for(j=0;j<count;j++)
    {
        printf("%d ",b[j]);
    }
    return 0;
}
