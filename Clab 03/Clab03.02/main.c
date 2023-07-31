#include <stdio.h>
#include <stdlib.h>
int main()

{
    int num1,num2,num3,largest,smallest;
    printf("Enter the first intiger");
    scanf("%d",&num1);
    printf("Enter the second intiger");
    scanf("%d",&num2);
    printf("Enter the third Intiger");
    scanf ("%d",&num3);
    largest=smallest=num1;
  if (num2>largest)
    {
        largest=num2;
    }
    if (num3>largest)
{
   largest =num3;
}
    if (num2<smallest)
    {
        smallest =num2;
    }

    if (num3<smallest)
   {
       smallest =num3;
}

   printf ("The largest intiger is %d\n\n",largest);
   printf("The smallest intiger is %d\n\n",smallest);
}

