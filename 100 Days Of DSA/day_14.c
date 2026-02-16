//Problem: Write a program to check whether a given square matrix is an Identity Matrix.
//An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

#include <stdio.h>

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int n;
    scanf("%d", &n);
    printf("Read n = %d\n", n);

    int matrix[100][100];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix read:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int isIdentity = 1;

    printf("Checking diagonal elements:\n");
    for(int i = 0; i < n; i++) {
        if(matrix[i][i] != 1) {
            printf("Diagonal[%d][%d] = %d, should be 1\n", i, i, matrix[i][i]);
            isIdentity = 0;
        }
    }

    printf("Checking off-diagonal elements:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j && matrix[i][j] != 0) {
                printf("Off-diagonal[%d][%d] = %d, should be 0\n", i, j, matrix[i][j]);
                isIdentity = 0;
            }
        }
    }

    if(isIdentity) {
        printf("Identity Matrix\n");
    } else {
        printf("Not an Identity Matrix\n");
    }

    return 0;
}
