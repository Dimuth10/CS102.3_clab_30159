#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,ans;
    printf("Enter a number ");
    scanf("%d",&num);
     ans=num%2;
     if (ans==1)
        printf("The entired number is an odd number \n",num);
        else
        printf("The entired number is an even",num);
}

