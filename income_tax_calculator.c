// ROLL NUMBER : 167 - B - CT
#include <stdio.h>

int main() {
    float income, tax;

    printf("Enter your annual income: ");
    scanf("%f", &income);

    if (income <= 250000)
        tax = 0;
    else if (income <= 500000)
        tax = income * 0.05;
    else if (income <= 1000000)
        tax = income * 0.20;
    else
        tax = income * 0.30;

    printf("Your tax amount is %.2f rs\n", tax);
    return 0;
}
