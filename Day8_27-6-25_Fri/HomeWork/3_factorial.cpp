#include <iostream>
#include <stdio.h>

int factorial(int n) {
    if (n == 1) {
        return n;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n = 6;
    int result = factorial(n);
    printf("Factorial of %d is %d\n", n, result);
    return 0;
}