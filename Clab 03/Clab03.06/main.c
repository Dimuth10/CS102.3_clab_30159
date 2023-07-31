#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("ASCII values of uppercase letters:\n");
    for (ch = 'A'; ch <= 'Z'; ch++)
  {
    printf("%c: %d\n", ch, ch);
  }
    printf("\nASCII values of lowercase letters:\n");
    for (ch = 'a'; ch <= 'z'; ch++)
    {
    printf("%c: %d\n", ch, ch);
    }
    printf("\nASCII values of digits:\n");
    for (ch = '0'; ch <= '9'; ch++)
    {
      printf("%c: %d\n", ch, ch);
    }
     printf("\nASCII values of special symbols:\n");
     printf("$: %d\n", '$');
     printf("*: %d\n", '*');
     printf("+: %d\n", '+');
     printf("/: %d\n", '/');
     printf("Blank Character: %d\n", ' ');
}


