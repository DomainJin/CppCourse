#include <stdio.h>

int even(int init, int n) {
    if ( init <= n) {
        printf("%d ", init);
        return even(init + 2,n);
    }
    
    return 0;
}


int fibonacy(int init,int n) {
    if(init == 1 || init == 2) {
        printf("%d ", 1);
        return fibonacy(init + 1, n);
    }
    int a = 1, b = 1, result = 0;
    for (int i = 3; i <= init; ++i) {
        result = a + b;
        a = b;
        b = result;
        if (result > n) {
            return 0;
        }
    }
    printf("%d ", result);
    return fibonacy(init + 1, n);
}

int giaithua(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * giaithua(n - 1);
}

int main() {
    
    int n = 100;
    printf("Các số chẵn từ 0 đến %d là: \n", n);
    even(0,n);
    printf("\nDãy số Fibonacy từ 1 đến %d là: \n", n);
    fibonacy(1, n);
    // printf("\nGiai thừa của %d là: %d\n", n, giaithua(n));
    return 0;
}

