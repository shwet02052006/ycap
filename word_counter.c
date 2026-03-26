// ROLL NUMBER : 167 - B - CT
#include <stdio.h>

int main() {
    char str[200];
    int i, words = 0;

    printf("Enter a line: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0'))
            words++;
    }

    printf("Number of words = %d\n", words);
    return 0;
}