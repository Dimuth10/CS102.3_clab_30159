#include <stdio.h>
#include <stdlib.h>

int main()

{
    float radius,area,diam,circum;
    const float X=3.14159;
    printf("Enter the radius of the Circle  ");
    scanf("%f",&radius);

    diam =radius*2;
    circum=2*X*radius;
    area=X*radius*radius;
    printf("\nThe diameter of the circle is %f\n\n",diam);
    printf("The circumference of the circle is %f\n\n",circum);
    printf("The Area of the circle is %f\n\n",area);

}
