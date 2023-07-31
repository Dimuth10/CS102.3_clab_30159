#include <stdio.h>
#include <stdlib.h>



int main()
{
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], vectorSum[size];
    int scalarSum = 0;


    printf("Enter %d integer values for Array 1:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
        scalarSum += array1[i];
    }


    printf("Enter %d integer values for Array 2:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }


    printf("Vector Sum:\n");
    for (int i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
        printf("%d ", vectorSum[i]);
    }
    printf("\n");


    printf("Scalar Sum: %d\n", scalarSum);

    return 0;
}

