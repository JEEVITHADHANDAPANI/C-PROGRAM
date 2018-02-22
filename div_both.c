#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:\n");
    scanf("%d\t%d",&a,&b);
    if((a%a==0)&&(b%a==0))
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
    return 0;
}
