#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter value for a and band c:");
    scanf("%d\t%d\t%d",&a,&b,&c);
    d=(a*b)%c;
    printf("%d",d);
    return 0;
} 
