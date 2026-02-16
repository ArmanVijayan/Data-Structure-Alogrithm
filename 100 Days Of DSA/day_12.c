//Problem: Write a program to check whether a given matrix is symmetric.
//A matrix is said to be symmetric if it is a square matrix and is equal to its transpose
//(i.e., element at position [i][j] is equal to element at position [j][i] for all valid i and j).

#include <stdio.h>

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int m, n;
    scanf("Enter the order `%d %d", &m, &n);
    printf("Dimensions: %d x %d\n", m, n);

    int matrix[100][100];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    if(m != n) {
        printf("Not a Symmetric Matrix\n");
        return 0;
    }

    int isSymmetric = 1;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < i; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if(!isSymmetric) break;
    }

    if(isSymmetric) {
        printf("Symmetric Matrix\n");
    } else {
        printf("Not a Symmetric Matrix\n");
    }

    return 0;
}
