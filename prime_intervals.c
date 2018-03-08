#include<stdio.h>
int main()
{
    int a,b,i,j,count=0;
    printf("Enter a and b:");
    scanf("%d\t%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=b/2;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count<2)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}
