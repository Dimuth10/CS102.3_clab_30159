#include <stdio.h>
#include <stdlib.h>

int main()
{
    char empname[30];
    float bas,inc,news;

    printf ("Enter the employee name");
    scanf("%s",&empname);
    printf("Enter the basic salary");
    scanf("%f",&bas);
    if (bas<5000)
        inc=bas*0.05;
        else if (bas>10000)
        inc=bas*0.15;
        else
        inc=bas*10/100;

        news=bas+inc;
        printf("Employee name %s\n",empname);
        printf("New salary %2f\n",news);

}

