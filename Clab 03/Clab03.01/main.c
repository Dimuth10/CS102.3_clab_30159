#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,max;
    printf("Enter two numbers");
    scanf("%d %d",&n1,&n2);
     if (n1<n2)
        max=n2;
     else
        max=n1;
        printf("The highest is %d \n",max);
}


