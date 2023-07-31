#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10];
    int total=0;

    printf("Enter 10 marks\n");
    for(int i = 0; i < 10; i++)
  {
    scanf("%d", &marks[i]);
    total += marks[i];
  }
    float avarage= (float)total/10;
    printf("Total %d \n",total);
    printf("Average%2f\n",avarage);

    if(avarage<50)
    {
        printf("Fail\n");
    }
        else
        {
            printf("pass\n");

        }
    }
