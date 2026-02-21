//Problem: Given an array of integers, count the number of subarrays whose sum is equal to zero.

#include <stdio.h>

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    int count = 0;

    printf("Checking all subarrays:\n");
    for(int i = 0; i < n; i++) {
        int sum = 0;
        printf("Starting from index %d: ", i);
        for(int j = i; j < n; j++) {
            sum += arr[j];
            printf("[%d..%d] sum=%d ", i, j, sum);
            if(sum == 0) {
                count++;
                printf("✓");
            }
            printf("  ");
        }
        printf("\n");
    }

    printf("\nTotal subarrays with sum zero: %d\n", count);

    return 0;
}
