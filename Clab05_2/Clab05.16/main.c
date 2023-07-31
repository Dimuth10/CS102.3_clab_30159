#include <stdio.h>
#include <stdlib.h>

int main()
{
 int numbers[10];
 int i,pcount=0,ncount=0,zcount=0;
 printf("Enter 10 numbers\n");

 for (i = 0; i<10;i++)
 {
     scanf("%d",&numbers[i]);
 }
    for (i=0;i<10;i++)
    {
        if (numbers[i]>0)
        {
            pcount++;
        }
       else if (numbers[i]<0)
    {
        ncount++;
    }
     else
        {zcount++;}
    }
     printf("Positive numbers%d\n",pcount);
     printf("Negative numbers%d\n",ncount);
     printf("Zeros%d\n",zcount);


}


