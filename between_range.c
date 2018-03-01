#include <stdio.h>
int main()
{
    int a,b,count=0,i;
    printf("Enter a and b:\n");
    scanf("%d\t%d",&a,&b);
    for(i=a;i<b;i++)
    {
       count++;
    }
    printf("%d",count);
    return 0;
}
