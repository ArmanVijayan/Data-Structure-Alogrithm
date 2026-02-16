//Problem: Given an array of integers, count the frequency of each distinct element and print the result.
#include <stdio.h>

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int n;
    scanf("%d", &n);

    int arr[100];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        int printed = 0;
        for(int k = 0; k < i; k++) {
            if(arr[k] == arr[i]) {
                printed = 1;
                break;
            }
        }

        if(printed == 0) {
            printf("%d:%d ", arr[i], count);
        }
    }
    printf("\n");

    return 0;
}
