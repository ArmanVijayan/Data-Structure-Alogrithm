//Problem: Given an array of n integers, reverse the array in-place using two-pointer approach.

#include <stdio.h>

    int main() {

        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
        printf("NAME: ARMAN VIJAYAN\n");
        printf("SAPID: 590020130\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");


        int n;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);

        int arr[n];
        printf("Enter %d elements: ", n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int left = 0;
        int right = n - 1;

        while(left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }

        printf("Reversed array: ");
        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
    }