//Problem: Given a sorted array of n integers, remove duplicates in-place. Print only unique elements in order.
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int newSize = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] != arr[newSize - 1]) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("Unique elements: ");
    for(int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
