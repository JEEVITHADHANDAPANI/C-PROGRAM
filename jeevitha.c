#include<stdio.h>
void moving();
void brake_car();
void speeddecrease(int);
int main()
{
  int d,j;
  printf("enter destination point in km");
  scanf("%d",&d);
  printf(" now the car started to drive in starting position");
  for(j=1;j<=d;j++)
  {
    moving();
    if(j==d)
    {
     brake_car();
    printf(" your the destination is reached");
      
    }
  }
  return 0;
}
void moving()
{
  int ob,speed=80,bend,left,right;
printf("1.speedbreaker\n2.crossing\n3.red\n4.greenand yellow\n5.leftbend\n6.right bend");
scanf("%d",&ob);
  if((ob==2)||(ob==3))
  {
    brake_car();
  }
else if((ob==1)||(ob==5)||(ob==6))
{
  speeddecrease(ob);
}
  else
  {
    printf("the car is driving at speed 80km/hr");
  }
}
void brake_car()
{int i;
  printf(" now the car is stopped");
  for(i=1;i>=0;i--)
  {
    if(i==0)
    {
      moving();
    }
  }
}
void speeddecrease(int ob)
{int i;
  printf(" now the car moving in slowspeed");
  for(i=1;i>=0;i--)
  {
    if(i==0)
    {
      moving();
    }
  }
  if(ob==5)
  {
    printf(" now the car truned to left");
  }
  else
  {
      printf(" now thecar truned to right");
  }
}

