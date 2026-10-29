/* Simple calculator using switch statement */
#include <stdio.h>

int main(void) {
    char operator;
    double first, second;

    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &operator) != 1) return 1;

    printf("Enter two operands: ");
    if (scanf("%lf %lf", &first, &second) != 2) return 1;

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", first, second, first + second);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", first, second, first - second);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", first, second, first * second);
            break;
        case '/':
            if (second != 0.0) {
                printf("%.2lf / %.2lf = %.2lf\n", first, second, first / second);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Error: Unsupported operator.\n");
    }

    return 0;
}
