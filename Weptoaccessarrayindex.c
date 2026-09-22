#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int index;

    printf("Enter index: ");
    scanf("%d", &index);

    printf("Element at index %d = %d", index, arr[index]);

    return 0;
}