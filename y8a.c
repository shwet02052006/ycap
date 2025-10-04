// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
int main() {
    int n, last, first;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    last = n % 10;   

    while(n >= 10) { 
        n = n / 10;
    }
    first = n;

    printf("First digit = %d, Last digit = %d\n", first, last);
return 0;
}