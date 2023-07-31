#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10

int main() {
    int arr[ARRAY_SIZE];
    int i, sum = 0, min, max;


    printf("Enter %d integer values:\n", ARRAY_SIZE);
    for (i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }


    min = max = arr[0];
    for (i = 1; i < ARRAY_SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }


    float average = (float)sum / ARRAY_SIZE;


    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", average);


    printf("Values in reverse order:\n");
    for (i = ARRAY_SIZE - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
