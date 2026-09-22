#include <stdio.h>

int main()
{
    int choice;

    printf("Choose a data structure:\n");
    printf("1. Array\n");
    printf("2. Linked List\n");
    printf("3. Tree\n");
    printf("4. Graph\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("The given data structure is an Array.");
            break;

        case 2:
            printf("The given data structure is a Linked List.");
            break;

        case 3:
            printf("The given data structure is a Tree.");
            break;

        case 4:
            printf("The given data structure is a Graph.");
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}