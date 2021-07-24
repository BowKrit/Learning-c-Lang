#include <stdio.h>

void print(int arr[], int n) {
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void reverse(int arr[], int n) {
    int aux[n];
    for(int i = 0; i < n; i++){
        aux[n - 1 - i] = arr[i];
    }
    for(int i = 0; i < n; i++){
        arr[i] = aux[i];
    }
}


int main() {
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(list)/ sizeof(list[0]);

    printf("\nOriginal array\n");
    print(list, size);

    printf("\nReverse array\n");
    reverse(list, size);
    print(list, size);

    return 0;
}