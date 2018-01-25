#include <stdio.h>
void main()
{
int x,y,max,lcm,j;
printf("Enter the two number");
scanf("%d%d",&x,&y);
if(x>y)
    max=x;
else
    max=y;
j=max;
while(1)
    {
        if(j%a==0 && j%b==0)
        {
           lcm = j;
          break;
        }

        j+= max;
    }
 printf("LCM of %d and %d = %d", x, y, lcm);
 getch();
}
