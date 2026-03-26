// ROLL NUMBER : 167 - B - CT
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int main(){
    int arr[MAX];
    for(int i =0 ; i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i =0 ; i<10;i++){
        if(arr[i]%2!=0)
        printf("%d \t",arr[i]);
    }
    return 0;
}