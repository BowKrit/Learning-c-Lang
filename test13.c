#include <stdio.h>
int main() {
    int n1 = 0, n2 = 1, n3, number;
    n3 = n1 + n2;

    printf("Enter number of term : ");
    scanf("%d", &number);
    printf("\nFibonacci series : %d, %d", n1, n2);

    for(int i = 2; i < number; i++){
        printf(", %d", n3);
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
    return 0;
}