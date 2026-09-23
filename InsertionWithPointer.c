#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos, value;
    int *p = arr;

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    printf("Enter value: ");
    scanf("%d", &value);

    if (pos < 1 || pos > n + 1)
    {
        printf("Invalid position");
    }
    else
    {
        // Shift elements to the right
        for (int i = n; i >= pos; i--)
        {
            *(p + i) = *(p + i - 1);
        }

        // Insert the new value
        *(p + pos - 1) = value;

        n++;

        printf("Array after insertion:\n");

        for (int i = 0; i < n; i++)
        {
            printf("%d ", *(p + i));
        }
    }

    return 0;
}