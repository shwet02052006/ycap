
// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice, i;

    printf("Menu:\n");
    printf("1. Reverse\n");
    printf("2. Count vowels\n");
    printf("3. Convert to UPPERCASE\n");
    printf("4. Convert to lowercase\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter a string (no spaces): ");
    scanf("%s", str);

    switch (choice) {
        case 1: { 
            int len = strlen(str);
            printf("Reversed string: ");
            for (i = len - 1; i >= 0; i--) {
                printf("%c", str[i]);
            }
            printf("\n");
            break;
        }

        case 2: { 
            int count = 0;
            for (i = 0; str[i] != '\0'; i++) {
                if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
                    str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                    count++;
                }
            }
            printf("Number of vowels: %d\n", count);
            break;
        }

        case 3: { 
            for (i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'a' && str[i] <= 'z') {
                    str[i] = str[i] - 32;
                }
            }
            printf("Uppercase: %s\n", str);
            break;
        }

        case 4: { 
            for (i = 0; str[i] != '\0'; i++) {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] = str[i] + 32;
                }
            }
            printf("Lowercase: %s\n", str);
            break;
        }

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
