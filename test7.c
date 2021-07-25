#include <stdio.h>

void print(int arr[], int n) {
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumForLoop(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int sumWhileLoop(int arr[], int size){
    int sum = 0, i = 0;
    while (i < size){
        sum += arr[i];
        i++;
    }
    return sum;
}

int sumRecrusion(int arr[], int size, int index){
    if(index == size - 1){
        return arr[index];
    }
    else{
        return arr[index] + sumRecrusion(arr, size, index + 1); 
    }
    return 0;
}

int main() {

    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(list)/ sizeof(list[0]);
    printf("List : \n");
    print(list, size);

    printf("Sum in for-loop : %d\n", sumForLoop(list, size));
    printf("Sum in while-loop : %d\n", sumWhileLoop(list, size));

    int index = 0;
    printf("Sum in recrusion : %d\n", sumRecrusion(list, size, index));

    return 0;
}