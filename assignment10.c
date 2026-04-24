#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double a, b;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square\n");
    printf("6. Cube\n");
    printf("7. Square Root\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result = %.2lf\n", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            if(b != 0)
                printf("Result = %.2lf\n", a / b);
            else
                printf("Error! Division by zero\n");
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &a);
            printf("Square = %.2lf\n", a * a);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%lf", &a);
            printf("Cube = %.2lf\n", a * a * a);
            break;

        case 7:
            printf("Enter a number: ");
            scanf("%lf", &a);
            if(a >= 0)
                printf("Square Root = %.2lf\n", sqrt(a));
            else
                printf("Invalid input for square root\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
