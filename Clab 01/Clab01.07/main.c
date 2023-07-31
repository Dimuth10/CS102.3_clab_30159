#include <stdio.h>
#include <stdlib.h>

int main()
{
 float num1,num2,temp;
 printf("Enter the first number");
 scanf("%f",&num1);
 printf("Enter the second number");
 scanf("%f",&num2);
 printf("Before swap\n");
 printf("first number%2f\n",num1);
 printf("second number%2f\n",num2);
 temp=num1;
 num1=num2;
 num2=temp;
 printf("Aber swap\n");
 printf("First number%2f\n",num1);
 printf("second number%2f\n",num2);
}
