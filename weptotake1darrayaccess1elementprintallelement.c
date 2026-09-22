#include <stdio.h>

int main()
{
    int arr[5];
    int i, index;


    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index to access: ");
    scanf("%d", &index);

    printf("Element = %d\n", arr[index]);


    printf("All elements:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
