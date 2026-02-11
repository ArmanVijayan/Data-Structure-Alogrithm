//Problem: A secret system stores code names in forward order. To display them in mirror format,
//you must transform the given code name so that its characters appear in the opposite order.
#include <stdio.h>
#include <string.h>

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    char codeName[1000];

    printf("Enter the code name: ");
    scanf("%s", codeName);

    int length = strlen(codeName);

    printf("Mirror code name: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", codeName[i]);
    }
    printf("\n");

    return 0;
}

