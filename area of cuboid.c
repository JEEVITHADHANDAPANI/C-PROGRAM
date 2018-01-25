#include<stdio.h>
int main()
{
  int l,w,h,a,v;
  printf("enter l,w and b:");
  scanf("%d\t%d\t%d",&l,&w,&h);
  a=(2*l*w)+(2*l*h)+(2*h*w);
  printf("Area is %d",a);
  v=l*w*h;
  printf("Volume is %d",v);
  return 0;
}
