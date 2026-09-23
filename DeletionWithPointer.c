#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos;
    int *p = arr;

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos < 1 || pos > n)
    {
        printf("Invalid position");
    }
    else
    {
        // Shift elements to the left
        for (int i = pos - 1; i < n - 1; i++)
        {
            *(p + i) = *(p + i + 1);
        }

        n--;

        printf("Array after deletion:\n");

        for (int i = 0; i < n; i++)
        {
            printf("%d ", *(p + i));
        }
    }

    return 0;
}