// ROLL NUMBER : 167 - B - CT
#include <stdio.h>

void main()
{
    int n = 58;
    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("fizzbuzz \n");
    }
    if (n % 3 == 0)
    {
        printf("fizz \n");
    }
    if (n % 5 == 0)
    {
        printf("buzz\n");
    }
    while (n > 0)
    {
        int d = n % 10;
        if (d == 3)
        {
            printf("fizz \n");
        }
        if (d == 5)
        {
            printf("buzz\n");
        }
        n /= 10;
    }
}
