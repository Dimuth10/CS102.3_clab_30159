#include <stdio.h>
#include <stdlib.h>

int main()
    {
        int rows = 5;
        int i,j;

        for (i = 1; i <= rows; ++i)
        {for (j = 1; j <= i; ++j)
        {
          printf("*");
        }
        printf("\n");
    }
    }
