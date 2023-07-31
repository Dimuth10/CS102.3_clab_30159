#include <stdio.h>
#include <stdlib.h>

int main()
{
 float d,t,s;
 printf("Enter the distance traveled in meters");
 scanf("%f",&d);
 printf("Enter the qme taken in seconds");
 scanf("%f",&t);
 s=d/t;
 printf("Averege speed %2f\n",s);
}
