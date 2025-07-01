#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void demo_malloc() {
    int *arr = (int *)malloc(3*sizeof(int));

    for (int i = 0; i < 3; i++) {
        arr[i] = i +1;
    }
    realloc(arr, 5 * sizeof(int));
    arr[3] = 4;
    arr[4] = 5;

    printf("Mảng:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d-- ", arr[i]);
    }
    free(arr);
    printf("\nGiải phóng bộ nhớ cho bién arr");

}

int main() {
    demo_malloc();
    return 0;
}