#include <stdio.h>
#include <stdlib.h>



int main() {
    char name[50];
    int birthyear, currentyear, age;

    printf("Enter the student's name: ");
    scanf("%s", name);

    printf("Enter the student's birth year: ");
    scanf("%d", &birthyear);

    currentyear = 2023;
    age = currentyear - birthyear;

    printf("Student's name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}

