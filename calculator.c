#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    FILE *fp;
    int choice;
    double a, b, result;

    fp = fopen("history.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    do {
        printf("\n===== CALCULATOR MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Modulus\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
        }

        switch (choice) {
            case 1:
                result = a + b;
                printf("Result = %.2lf\n", result);
                fprintf(fp, "%.2lf + %.2lf = %.2lf\n", a, b, result);
                break;

            case 2:
                result = a - b;
                printf("Result = %.2lf\n", result);
                fprintf(fp, "%.2lf - %.2lf = %.2lf\n", a, b, result);
                break;

            case 3:
                result = a * b;
                printf("Result = %.2lf\n", result);
                fprintf(fp, "%.2lf * %.2lf = %.2lf\n", a, b, result);
                break;

            case 4:
                if (b == 0) {
                    printf("Error: Division by zero!\n");
                } else {
                    result = a / b;
                    printf("Result = %.2lf\n", result);
                    fprintf(fp, "%.2lf / %.2lf = %.2lf\n", a, b, result);
                }
                break;

            case 5:
                result = pow(a, b);
                printf("Result = %.2lf\n", result);
                fprintf(fp, "%.2lf ^ %.2lf = %.2lf\n", a, b, result);
                break;

            case 6: {
                printf("Result = %.2f\n", fmod(a, b));
                fprintf(fp, "%.2lf %% %.2lf = %.2f\n", a, b, fmod(a, b));
                break;
            }

            case 7:
                printf("Thank you for using the calculator!\n");
                printf("Exiting calculator...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 7);

    fclose(fp);

    return 0;
}
