#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    double a, b, result;

    do {
        printf("\n===== CALCULATOR MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        }

        switch (choice) {
            case 1:
                result = a + b;
                printf("Result = %.2lf\n", result);
                break;

            case 2:
                result = a - b;
                printf("Result = %.2lf\n", result);
                break;

            case 3:
                result = a * b;
                printf("Result = %.2lf\n", result);
                break;

            case 4:
                if (b == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = a / b;
                    printf("Result = %.2lf\n", result);
                }
                break;

            case 5: 
                printf("\nThank you for using the calculator!\n");
                printf("Exiting calculator...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}
