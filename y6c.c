// ROLL NUMBER : 167 - B - CT
#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("Enter the value n(number of rows): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)

    {
        for (int k = (n - i); k > 0; k--)

            printf(" ");

        for (j = 1; j <= i; j++)
        {

            printf("*");
        }

        printf("\n");
    }

    for (i = n; i > 0; i--)

    {
        for (int k = (n - i); k > 0; k--)

            printf(" ");

        for (j = i; j > 0; j--)
        {

            printf("*");
        }

        printf("\n");
    }

    return 0;
}