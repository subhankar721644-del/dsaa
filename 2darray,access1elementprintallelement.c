#include <stdio.h>

int main()
{
    int arr[2][3];
    int i, j;
    int row, col;
    printf("Enter 6 elements:\n");
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter row and column: ");
    scanf("%d %d", &row, &col);

    printf("Element = %d\n", arr[row][col]);
    printf("All elements:\n");

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
