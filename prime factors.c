#include<stdio.h>
int main()
{
    int n,i,j,count=0,t=0;
    printf("Enter num\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          t=i;
        for(j=2;j<t;j++)
        {
          if(t%j==0)  
          {
              count++;
          }
        }
        }
        if(count<2)
        {
            printf("%d",t);
        }
    }
    return 0;
}
