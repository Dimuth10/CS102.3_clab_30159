#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number , sum=0;

    printf("Enter a number  ");
    scanf("%d",&number);

    int reminder;
    while(number > 0)
    {
        reminder= number %10;
        sum += reminder;
        number /=10;

    }
      printf("sum of digits %d\n",sum);
}
