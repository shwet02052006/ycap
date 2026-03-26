// ROLL NUMBER : 167 - B - CT
#include <stdio.h>

int main() {
    int n, i, j, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2;
    num = total;

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}