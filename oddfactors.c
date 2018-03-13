#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number:\n");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            if(i%2!=0)
            {
                printf("%d\t",i);
            }
        }
    }
    return 0;
}
