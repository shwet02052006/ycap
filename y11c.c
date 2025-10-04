// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[10] = "MADAM";
    int l = strlen(str);
    for (int i = 0; i <= l / 2; i++)
    {
        if (str[i] != str[l - i -1])
        {
            printf("NOT PALINDROM\n");
            return 0;

        }
        else
        {
            printf("PALINDROM \n");
            return 0;
        }
    }
  
}