/* Check whether a number is prime */
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n;
    bool is_prime = true;

    printf("Enter a positive integer: ");
    if (scanf("%d", &n) == 1) {
        if (n <= 1) {
            is_prime = false;
        } else {
            for (int i = 2; i * i <= n; ++i) {
                if (n % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }

        if (is_prime) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }
    return 0;
}
