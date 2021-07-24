#include <stdio.h>
#include <stdlib.h>

int main(){
    int lower, upper;
    printf("Welcome to guessing game\n");
    printf("Please enter range of this game\n");
    printf("Lower is ");
    scanf("%d", &lower);
    printf("Upper is ");
    scanf("%d", &upper);
    printf("The range [lower, upper] is [%d, %d]", lower, upper);

    if(lower >= upper){
        printf("Lower must be greather than upper");
    }
    else{
        int target = rand()%(upper - lower +1);
        int isfinished = 0;
        printf("\nTarger is %d \n", target);

        int tempLower = lower, tempUpper = upper;
        do{
            printf("\nPlease selected number :");
            int i;
            for(i = tempLower; i <= tempUpper; i++){
                printf("%d ", i);
            }

            int selected;
            printf("\nYour selected : ");
            scanf("%d", &selected);

            if(selected < lower || selected > upper){
                printf("\nYour selected is wrong. Please selected in range [%d, %d]", lower, upper);
            }            
            else{
                printf("\n----------------------------");

                if(selected < target){
                    printf("\nMy number is more than %d\n", selected);
                    tempLower = selected + 1;
                }
                else if(selected > target){
                    printf("\nMy number is greather than %d\n", selected);
                    tempUpper = selected - 1;
                }
                else{
                    printf("\nYes, your selected is collect. My number is %d", selected);
                    isfinished = 1;
                }
                printf("\n----------------------------");
            }
        }while (isfinished == 0);       
    }
    return 0;
}