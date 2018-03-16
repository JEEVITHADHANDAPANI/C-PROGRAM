#include<stdio.h>
int main()
{
    int x,c[5],i,j,t,k;
    printf("Enter the no of elements and k:\n");
    scanf("%d\t%d",&x,&k);
    for(i=0;i<x;i++)
    {
        scanf("%d",&c[i]);
    }
    for(i=0;i<x-1;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(c[i]>c[j])
            {
                t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
    printf("%d",c[k]);
    return 0;
}
