/* Linear search in an array */
#include <stdio.h>

int main(void) {
    int n, key, found_index = -1;

    printf("Enter array size: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    printf("Enter value to search: ");
    if (scanf("%d", &key) != 1) return 1;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            found_index = i;
            break;
        }
    }

    if (found_index != -1) {
        printf("Element found at index %d (position %d).\n", found_index, found_index + 1);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}
