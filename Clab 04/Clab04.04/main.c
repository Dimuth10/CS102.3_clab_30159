#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vowel;
    printf("Enter a character  ");
    scanf("%c",&vowel);

    switch(vowel)
    {
        case 'a':printf("Vowel\n");break;
        case 'e':printf("Vowel\n");break;
        case 'i':printf("Vowel\n");break;
        case 'o':printf("Vowel\n");break;
        case 'u':printf("Vowel\n");break;
        default: printf("Not a vowel\n");break;
    }

}

