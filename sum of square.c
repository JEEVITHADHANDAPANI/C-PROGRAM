#include<stdio.h>
int main()
{
    int n,t,sum=0;
    printf("Enter the num:\n");
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
       sum=sum+(t*t);
       n=n/10;
    }
    printf("%d\n",sum);
    return 0;
}
