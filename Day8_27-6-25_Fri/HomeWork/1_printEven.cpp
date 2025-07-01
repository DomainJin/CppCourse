#include <iostream>
#include <stdio.h>

void printEven(int init, int n) {
    if (init < n) {
        //check if init is even or odd
        if (init % 2 == 1) {
            printEven(init + 1, n);
            return printEven(init + 1, n);
        }
        else  {
            printf("%d ", init);
            return printEven(init + 2, n);
        } 
    }
    else {
        return;
    }
}

int main() {
    int n = 100 ;
    printEven(9, n);
    return 0;
}