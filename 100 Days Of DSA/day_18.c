//Problem: Given an array of integers, rotate the array to the right by k positions.

#include <stdio.h>

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int n, k;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter rotation positions (k): ");
    scanf("%d", &k);

    printf("Original array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    k = k % n;
    printf("Effective rotation: %d positions\n", k);

    int temp[n];
    for(int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    printf("Rotated array: ");
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
