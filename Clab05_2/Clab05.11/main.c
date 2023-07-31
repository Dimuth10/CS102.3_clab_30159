#include <stdio.h>
#include <stdlib.h>

int main()
    {
       int number,i,prime=1;

       printf("Enter a positive integer: ");
       scanf("%d", &number);
       if (number == 0 || number == 1)
        {
       prime = 0;
        } else
        {
       for (i = 2; i <= number / 2; ++i)
          {
       if (number % i == 0)
         {
          prime = 0;break;
         }
          }
          }
         if (prime)
          {
         printf("%d is a prime number.\n", number);
           } else

    {
       printf("%d is not a prime number.\n", number);
    }
    }

