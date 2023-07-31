#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int choice;
    float num1, num2, ans;

    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (choice) {
        case 1:
            ans = num1 + num2;
            printf("Answer: %f\n", ans);
            break;
        case 2:
            ans = num1 - num2;
            printf("Answer: %f\n", ans);
            break;
        case 3:
            ans = num1 * num2;
            printf("Answer: %f\n", ans);
            break;
        case 4:
            if (num2 != 0) {
                ans = num1 / num2;
                printf("Answer: %f\n", ans);
            } else {
                printf("Division by Zero not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

