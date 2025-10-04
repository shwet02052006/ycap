// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100] = "SHWET";
    int l = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        l++;
    }
    printf("lenght of string is %d", l);

    return 0;
}