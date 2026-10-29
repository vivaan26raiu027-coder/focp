/* Reverse digits of an integer */
#include <stdio.h>

int main(void) {
    int n, reversed = 0;
    printf("Enter an integer: ");
    if (scanf("%d", &n) == 1) {
        int temp = n;
        while (temp != 0) {
            reversed = reversed * 10 + (temp % 10);
            temp /= 10;
        }
        printf("Reversed number: %d\n", reversed);
    }
    return 0;
}
