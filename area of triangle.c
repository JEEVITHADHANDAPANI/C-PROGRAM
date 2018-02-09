#include<stdio.h>
int main()
{
    int base,height,area;
    printf("Enter base and height for a triangle:\n");
    scanf("%d\t%d\n",&base,&height);
    area=(base*height)/2;
    printf("Area of the triangle is %d\n",area);
    return 0;
}
