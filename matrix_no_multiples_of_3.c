// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int MAT[100][100];
    printf("Enter the value of n :\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            do {
                printf("Enter element at position [%d][%d]: ", i, j);
                scanf("%d", &temp);
                if (temp % 3 == 0) {
                    printf("Value %d is divisible by 3. Please enter another value.\n", temp);
                }
            } while (temp % 3 == 0);
            MAT[i][j] = temp;
        }
    }
    printf("The elements of the matrix are:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", MAT[i][j]);
        }
        printf("\n");
    }
    return 0;
}