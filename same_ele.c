include<stdio.h>
int main()
{
    int n,a[10],b[10],i,j;
    printf("Enter the no of elements:\n");
    scanf("%d",&n);
    printf("Enter A array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter b array:\n");
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
               printf("%d\t",a[i]);
            }
        }
       
    }
    return 0;
}
