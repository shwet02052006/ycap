// ROLL NUMBER : 167 - B - CT
#include <stdio.h>

int main() {
    int choice, a, b, n;

    do {
        printf("\nMenu:\n");
        printf("1. Hello\n");
        printf("2. Add a + b\n");
        printf("3. Square of n\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Hello\n");
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                printf("Sum = %d\n", a + b);
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &n);
                printf("Square = %d\n", n * n);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 4);

    return 0;
}