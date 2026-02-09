//Problem: Given integers a and b, compute a^b using recursion without using pow() function.
#include <stdio.h>

long long power(int a, int b) {
    if (b == 0) {
        printf("Base: %d^0 = 1\n", a);
        return 1;
    }
    if (b == 1) {
        printf("Base: %d^1 = %d\n", a, a);
        return a;
    }

    printf("Step %d: calling power(%d, %d)\n", b, a, b-1);
    long long result = a * power(a, b-1);
    printf("%d^%d = %d * %lld = %lld\n", a, b, a, power(a, b-1), result);
    return result;
}

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int a, b;
    printf("Enter base and exponent (a b): ");
    scanf("%d %d", &a, &b);
    printf("\nComputing %d^%d:\n\n", a, b);
    long long answer = power(a, b);
    printf("\nFinal Answer: %d^%d = %lld\n", a, b, answer);
    return 0;
}
