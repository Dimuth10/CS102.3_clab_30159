#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, rivnum =0,reminder;

    printf("Enter a number ");
    scanf("%d",&number);

    do
    {
        reminder = number %10;
        rivnum=rivnum*10+reminder;
        number=number / 10;
    } while (number !=0);
    printf("REversed number%d\n",rivnum);
}

