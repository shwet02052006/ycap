// ROLL NUMBER : 167 - B - CT
#include <stdio.h>
#include <stdlib.h>
#define MAX 101
int freq[MAX];
int main()
{
    int n;
    printf("enter size of array :\n");
    int x;
    scanf("%d", &n);
    printf("enter of Elements :\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        freq[x]++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("value=%d \t freq=%d \n", i, freq[i]);
    }
    return 0;
}