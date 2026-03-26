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
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    while (j < n) {
        arr[j++] = 0;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}