#include <iostream>
#include <stdio.h>

void printFibonacy(int a, int b, int n) {  //a is the 1st number, b is the 2nd number, n is the limit
    if (a <= n) {
        printf("%d ", a);
        printFibonacy(b, a + b, n);
    }
}

int main() {
    int n = 100;
    printFibonacy(0, 1, n);
    return 0;
}