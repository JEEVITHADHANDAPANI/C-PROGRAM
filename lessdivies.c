#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter number:\n");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            break;
        }
    }
    printf("YES");
    return 0;
}
