#include <stdio.h>

int main()
{
    int arr[5];
    int i, index;

    // Take 1D array input
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Access one element
    printf("Enter index to access: ");
    scanf("%d", &index);

    printf("Element = %d\n", arr[index]);

    // Print all elements
    printf("All elements:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}