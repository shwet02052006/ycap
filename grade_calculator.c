// ROLL NUMBER : 167 - B - CT
#include <stdio.h>

int main()
{
    int m;

    printf("Enter marks (0-100): ");
    scanf("%d", &m);

    if (m == 99)
        printf("Almost Perfect!\n");
    else if (m >= 90)
        printf("Grade A\n");
    else if (m >= 80)
        printf("Grade B\n");
    else if (m >= 70)
        printf("Grade C\n");
    else if (m >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}
