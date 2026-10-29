/* Find the largest of three numbers */
#include <stdio.h>

int main(void) {
    double a, b, c;
    printf("Enter three numbers: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        double max = a;
        if (b > max) max = b;
        if (c > max) max = c;
        printf("Largest number is: %.2lf\n", max);
    }
    return 0;
}
