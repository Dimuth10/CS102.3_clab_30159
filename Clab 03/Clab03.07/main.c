#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yofser;
    float basicsala;
    char city;
    float addallow=0,bonus=0,grossremu;

    printf("Enter the basic salary ");
    scanf("%f",&basicsala);

    printf("Enter the number of years of service ");
    scanf("%d",&yofser);

    printf("Enter the city ");
    scanf(" %c",&city);

    if (yofser > 5)
        addallow += 0.10 * basicsala;
    if (city=='C')
        addallow += 2500;
    if (basicsala >= 50000)
    bonus += 0.15*basicsala;
    else if (basicsala >= 25000)
        bonus += 0.12 *basicsala;
    else
        bonus += 0.10*basicsala;
    grossremu=basicsala+addallow+bonus;

    printf("Gross monthly Remuneration %2f\n",grossremu);
}
