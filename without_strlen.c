#include<stdio.h>
int main()
{
    char arr[40];
    int i,count=0;
    printf("Enter the string:\n");
    scanf("%s",arr);
    for(i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    printf("The length of the string is:%d",count);
    return 0;
}
