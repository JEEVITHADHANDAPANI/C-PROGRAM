#include<stdio.h>
#include<string.h>
int main()
{
    int num,i;
    printf("Enter num:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
      if(num%i==0)
      {
        if(i%2==0)
       printf("%d\t",i);
      }
    }
    return 0;
}
