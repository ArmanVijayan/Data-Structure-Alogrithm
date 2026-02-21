//Problem: Given an array of integers, find two elements whose sum is closest to zero.

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
    printf("\n");

    int closestSum = arr[0] + arr[1];
    int i1 = 0, i2 = 1;

    printf("Checking all pairs...\n");
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            printf("Pair %d+%d = %d\n", arr[i], arr[j], sum);
            if(sum > closestSum) {
                closestSum = sum;
                i1 = i;
                i2 = j;
            }
        }
    }

    printf("\nClosest to zero: %d + %d = %d\n", arr[i1], arr[i2], closestSum);
    printf("Output pair: %d %d\n", arr[i1], arr[i2]);

    return 0;
}
