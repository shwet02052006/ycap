// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;
    
    printf("Enter a string: ");
    scanf("%s", str);  

    int len = strlen(str);

    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
               
                for (k = j; k < len; k++) {
                    str[k] = str[k + 1];
                }
                len--;   
                j--;     
            }
        }
    }

    printf("String after removing duplicates: %s\n", str);
    return 0;
}
