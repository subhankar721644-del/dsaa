#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int element = 25;
    int position = 3;

    // Shift elements to the right
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[position - 1] = element;

    n++;

    // Display array
    printf("Array after insertion:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}