/* Arithmetic operations: addition, subtraction, multiplication, division */
#include <stdio.h>

int main(void) {
    double num1, num2;
    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Sum: %.2lf\n", num1 + num2);
    printf("Difference: %.2lf\n", num1 - num2);
    printf("Product: %.2lf\n", num1 * num2);

    if (num2 != 0) {
        printf("Quotient: %.2lf\n", num1 / num2);
    } else {
        printf("Division by zero is undefined.\n");
    }

    return 0;
}
