//Problem: A system receives two separate logs of user arrival times from two different servers.
//Each log is already sorted in ascending order.
//Your task is to create a single chronological log that preserves the correct order of arrivals.

#include <stdio.h>

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int p;
    printf("Enter number of entries in server log 1: ");
    scanf("%d", &p);

    int arr1[p];
    printf("Enter %d sorted arrival times from server 1: ", p);
    for(int i = 0; i < p; i++) {
        scanf("%d", &arr1[i]);
    }

    int q;
    printf("Enter number of entries in server log 2: ");
    scanf("%d", &q);

    int arr2[q];
    printf("Enter %d sorted arrival times from server 2: ", q);
    for(int i = 0; i < q; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[p + q];
    int i = 0, j = 0, k = 0;

    while(i < p && j < q) {
        if(arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while(i < p) {
        merged[k++] = arr1[i++];
    }

    while(j < q) {
        merged[k++] = arr2[j++];
    }

    printf("Chronological log: ");
    for(int x = 0; x < p + q; x++) {
        printf("%d ", merged[x]);
    }
    printf("\n");

    return 0;
}
