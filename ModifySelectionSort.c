#include <stdio.h>

void selectionSort(int arr[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        int swapped = 0;

        for (int i = step + 1; i < size; i++)
        {
            if (arr[i] < arr[min_idx])
            {
                min_idx = i;
            }
        }

     
        if (min_idx != step)
        {
            int temp = arr[step];
            arr[step] = arr[min_idx];
            arr[min_idx] = temp;

            swapped = 1;
        }

    
        if (swapped == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {7, 4, 9, 2, 3, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    printf("Sorted array: ");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
