#include <stdio.h>

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void concatenatesLists(int lists1[], int size1, int lists2[], int size2, int *mergedLists){
    for(int i = 0; i < size1; i++){
        mergedLists[i] = lists1[i];
    }

    for(int i = size1; i < (size1 + size2); i++){
        mergedLists[i] = lists2[i-size1];
    }
}

int main(){
    int list1[] = {1, 2, 3}, list2[] = {4, 5, 6, 7, 8, 9};
    
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int size2 = sizeof(list2) / sizeof(list2[0]);
    int newSize = size1 + size2;

    int mergedArr[newSize];
    concatenatesLists(list1, size1, list2, size2, mergedArr);
    
    printf("Mearged Array : ");
    print(mergedArr, newSize);
    
    return 0;
}