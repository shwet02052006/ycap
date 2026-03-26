// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int arr[MAX];
int main()
{

    int n;
    printf("enter size of array :\n");

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int ispal = 1;
    
 
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            ispal = 0;
            break;
        }
    }
    
    
    if (ispal)
    {
        printf("The array is a palindrome.\n");
    }
    else
    {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}