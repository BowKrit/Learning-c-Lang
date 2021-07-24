#include <stdio.h>

void print(int arr[], int n) {
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int hasInList(int target, int arr[], int size){
    int isFound = 0;
    for(int i = 0; i < size; i++){
        if(target == arr[i]){
            isFound = 1;
            break;
        }
    }
    return isFound;
}

void printFoundInList(int target, int arr[], int size){
    int result = hasInList(target, arr, size);
    printf("%d is %sfound in arry", target, result == 0 ? "not " : " ");
}


int main() {

    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(list)/ sizeof(list[0]);
    printf("List : \n");
    print(list, size);

    int num;
    printf("Enter your number : ");
    scanf("%d", &num);

    printFoundInList(num, list, size);

    return 0;
}