#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,i,n;
    printf("Enter points:\n");
    scanf("%d\t%d\t%d\t%d\t%d\t%d",&x1,&y1,&x2,&y2,&x3,&y3);
    if((x1==x2)&&(x1==x3)&&(x2==x3))
    {
        printf("YES");
    }
    else if((y1==y2)&&(y1==y3)&&(y2==y3))
    {
        printf("YES");
    }
    else
    {
    printf("NO");
    }
    return 0;
}
