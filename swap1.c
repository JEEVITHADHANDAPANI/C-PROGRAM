#include<stdio.h>
int main()
{
int x,y,t;
printf("Enter the two number");
scanf("%d%d",&x,&y);
printf("Before swaping %d %d",x,y);
t=x;
x=y;
y=t;
printf("After swaping %d %d",x,y);
return 0;
}
