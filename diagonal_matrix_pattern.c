// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j)   // diagonal condition
                printf("$ ");
            else
                printf(". ");
        }
        printf("\n");
    }

return 0;
}