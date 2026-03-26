// ROLL NUMBER : 167 - B - CT
#include <stdio.h>

int main()
{
    int ch;
    double amount, result;

    double usd_to_inr = 83.0;
    double inr_to_usd = 1.0 / 83.0;
    double eur_to_inr = 90.0;
    double inr_to_eur = 1.0 / 90.0;

    printf("currency converter\n");
    printf("1:USD to INR\n");
    printf("2: INR to USD\n");
    printf("3: EUR  to INR\n");
    printf("4:INR to EUR\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    printf("Enter amount: ");
    scanf("%lf", &amount);

    switch (ch)
    {
    case 1:
        result = amount * usd_to_inr;
        printf("%.2f USD = %.2f INR\n", amount, result);
        break;
    case 2:
        result = amount * inr_to_usd;
        printf("%.2f INR = %.2f USD\n", amount, result);
        break;
    case 3:
        result = amount * eur_to_inr;
        printf("%.2f EUR = %.2f INR\n", amount, result);
        break;
    case 4:
        result = amount * inr_to_eur;
        printf("%.2f INR = %.2f EUR\n", amount, result);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}
