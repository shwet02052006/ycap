// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
void main()
{
    float Y = 10000.00, X;
    printf("Enter the Amount to Withdraw \n");
    scanf("%f", &X);
    if ((int)X % 5 != 0)
    {
        printf("Transaction failed ");
    }
    if (X + 0.50 > Y)
    {
        printf("Insufficient funds ");
    }
    else
    {
        printf("new balance after deduction =%.2f ", Y - X);
    }
}
