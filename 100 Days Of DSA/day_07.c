//Problem: Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.
#include <stdio.h>

long long fib(int n) {
    if (n <= 1) {
        printf("Base: fib(%d) returns %lld\n", n, n);
        return n;
    }

    printf("Step %d: calling fib(%d) and fib(%d)\n", n, n-1, n-2);
    long long first = fib(n-1);
    long long second = fib(n-2);
    long long answer = first + second;
    printf("Step %d: %lld + %lld = %lld\n", n, first, second, answer);
    return answer;
}

int main() {

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
    printf("NAME: ARMAN VIJAYAN\n");
    printf("SAPID: 590020130\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    int n;
    printf("Enter number (n): ");
    scanf("%d", &n);
    printf("\nComputing fib(%d):\n\n", n);
    long long result = fib(n);
    printf("\nAnswer: fib(%d) = %lld\n", n, result);
    return 0;
}
