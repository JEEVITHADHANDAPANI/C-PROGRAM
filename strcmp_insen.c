#include<stdio.h>
#include<string.h>
int main()
{
    char arr[40],arr1[20];
    int i,j,count=0,l,t;
    printf("Enter 2 string:\n");
    scanf("%s\t%s",arr,arr1);
    l=strlen(arr);
    t=strlen(arr1);
    for(i=0,j=0;i<l,j<t;i++,j++)
    {
        if(arr[i]==arr[j])
        {
            count++;
        }
    }
    if(count==l&&count==t)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
