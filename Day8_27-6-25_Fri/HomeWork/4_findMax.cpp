#include <iostream>
#include <stdio.h>

int max(int a, int b) {
    if (a > b) {return a;} 
    else {return b;}
}

int findMax(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    } else {
        return max(arr[size - 1], findMax(arr, size - 1));
    }
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxElement = findMax(arr, size);
    printf("Maximum element in the array is %d\n", maxElement);
    return 0;
}