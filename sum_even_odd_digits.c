// ROLL NUMBER : 167 - B - CT
#include <stdio.h>

int main()
{
    int n, d, eSum = 0, oSum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        d = n % 10;
        if (d % 2 == 0)
            eSum += d;
        else
            oSum += d;
        n = n / 10;
    }

    printf("Even Sum = %d, Odd Sum = %d\n", eSum, oSum);

    return 0;
}