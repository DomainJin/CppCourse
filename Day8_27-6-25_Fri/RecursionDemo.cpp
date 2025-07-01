#include <stdio.h>

int sum(int n) {
    if (n > 0) {
        return n + sum(n - 1);
    }
    return 0;
}



int main() {
    
    int n=10;
    int result = sum(n);
    printf("Tổng từ 1 đến %d là: %d\n", n, result);
    
    return 0;
}