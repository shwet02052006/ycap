// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
int main() {
    int n, i = 1, j, num = 1;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    while(i <= n) {
        j = 1;
        while(j <= i) {
            printf("%d ", num);
            num++;
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}