#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main() {
    int choice;
    float radius, ans;

    printf("Menu:\n");
    printf("1. Calculate Circumference of a Circle\n");
    printf("2. Calculate Area of a Circle\n");
    printf("3. Calculate Volume of a Sphere\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    printf("Enter the radius: ");
    scanf("%f", &radius);

    switch (choice) {
        case 1:
            ans = 2 * PI * radius;
            printf("Circumference: %f\n", ans);
            break;
        case 2:
            ans = PI * radius * radius;
            printf("Area: %f\n", ans);
            break;
        case 3:
            ans = (4.0 / 3.0) * PI * radius * radius * radius;
            printf("Volume: %f\n", ans);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

