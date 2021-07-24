#include <stdio.h>

void print(int arr[], int n) {
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void getOddPosition(int arr[], int size, int newArr[]){
    int lastIndex = 0;
    for(int i = 0; i < size; i++){
        if(i%2 == 1){
            newArr[lastIndex] = arr[i];
            lastIndex++;
        }
    }
}

int main() {

    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(list)/ sizeof(list[0]);
    printf("List : \n");
    print(list, size);

    int oddArr[size / 2];

    getOddPosition(list, size, oddArr);
    printf("\nOdd Position Array :\n");
    print(oddArr, size / 2);

    return 0;
}