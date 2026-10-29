/* Check if a number is a palindrome */
#include <stdio.h>

int main(void) {
    int n, reversed = 0, remainder, original;
    printf("Enter an integer: ");
    if (scanf("%d", &n) == 1) {
        original = n;
        while (n != 0) {
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n /= 10;
        }

        if (original == reversed) {
            printf("%d is a palindrome.\n", original);
        } else {
            printf("%d is not a palindrome.\n", original);
        }
    }
    return 0;
}
