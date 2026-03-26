// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
int main() {
    int n, i, j, num = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            while(num % 3 == 0) 
                num++;
            printf("%3d", num);  
            num++;
        }
        printf("\n");
    }

return 0;
}