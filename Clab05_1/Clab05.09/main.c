#include <stdio.h>
#include <stdlib.h>

int main()
    {
      char letters;

      printf("ASCII values for A to Z\n");

      for (letters = 'A';letters <= 'Z';++letters)
     printf("%c %d\n", letters, letters);
    }

