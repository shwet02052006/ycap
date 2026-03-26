// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int arr[MAX];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 4;i>=0;i--){
        printf("%d \t",arr[i]);
    }

    return 0;
}