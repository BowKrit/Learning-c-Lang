
#include <stdio.h>

int getLargestNumber(int list[], int size) {
    int maxNum = list[0], i;

    for(i = 0; i < size; i++){
        if(list[i] > maxNum){
            maxNum = list[i];
        }
    }
    return maxNum;
}

int main() {
    int list[] = {32, 4, 54, 22, 54, 76, 66, 2, 6};
    int size = sizeof(list)/sizeof(list[0]);

    printf("The large Number : %d", getLargestNumber(list, size));

    return 0;
}