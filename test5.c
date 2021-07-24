#include <stdio.h>

void print(int arr[], int n) {
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int getTotalList(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {

    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(list)/ sizeof(list[0]);
    printf("List : \n");
    print(list, size);

    printf("Total : %d", getTotalList(list, size));

    return 0;
}