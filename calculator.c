#include <stdio.h>
#include <stdlib.h>

int main() {
    char op;
    double a, b, res;
    int choice;

    do {
        printf("\n===== Simple Calculator =====\n");

        // Input operator
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);   // space fixes input bug

        // Input numbers
        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &a, &b) != 2) {
            printf("Invalid input!\n");
            exit(1);
        }

        switch (op) {
            case '+':
                res = a + b;
                printf("Result: %.2lf\n", res);
                break;

            case '-':
                res = a - b;
                printf("Result: %.2lf\n", res);
                break;

            case '*':
                res = a * b;
                printf("Result: %.2lf\n", res);
                break;

            case '/':
                if (b == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    res = a / b;
                    printf("Result: %.2lf\n", res);
                }
                break;

            default:
                printf("Invalid operator!\n");
        }

        printf("\nDo you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("\nThank you for using the calculator!\n");
    return 0;
}