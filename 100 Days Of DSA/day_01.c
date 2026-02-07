//Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers.
//Shift existing elements to the right to make space.

#include <stdio.h>

    int main() {

        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
        printf("NAME: ARMAN VIJAYAN\n");
        printf("SAPID: 590020130\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

        int n;
        printf("Enter the number of elements in the array: ");
        scanf("%d", &n);

        int arr[n + 1];
        printf("Enter %d elements: ", n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int pos;
        printf("Enter the 1-based position to insert: ");
        scanf("%d", &pos);

        int x;
        printf("Enter the element to insert: ");
        scanf("%d", &x);

        for(int i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = x;

        printf("Updated array: ");
        for(int i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
    }
