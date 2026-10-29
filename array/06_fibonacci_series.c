/* Generate Fibonacci series up to N terms */
#include <stdio.h>

int main(void) {
    int terms;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    if (scanf("%d", &terms) == 1 && terms > 0) {
        printf("Fibonacci Series: ");
        for (int i = 1; i <= terms; ++i) {
            printf("%lld ", t1);
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("\n");
    }
    return 0;
}
