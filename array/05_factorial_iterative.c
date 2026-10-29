/* Calculate factorial of a non-negative integer */
#include <stdio.h>

int main(void) {
    int n;
    unsigned long long fact = 1;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) == 1 && n >= 0) {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    } else {
        printf("Please enter a valid non-negative integer.\n");
    }
    return 0;
}
