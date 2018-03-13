#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter number:\n");
    scanf("%d",&num);
    if((num>-32768)&&(num<32768))
    {
        printf("INT");
    }
    else
    {
        printf("LONG");
    }
    return 0;
}
