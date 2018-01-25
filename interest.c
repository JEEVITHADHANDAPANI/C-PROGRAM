#include<stdio.h>
#include<math.h>
int main()
{
  float p,t,r,sim;
  printf("Enter p t and r value:");
  scanf("%f\t%f\t%f",&p,&t,&r);
  sim=(p*t*r)/100;
  printf("Simple interest is %f",floor(sim));
  return 0;
}
