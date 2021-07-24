#include <stdio.h>
#include <math.h>
#include <ctype.h>

struct summary
{
    double normal;
    double plus;
    double substract;
    double product;
    double divide;
};

struct summaryCheck
{
    int normal;
    int plus;
    int substract;
    int product;
    int divide;
};

double calculate(double k){
    double result = ((pow(-1, (k+1)))/(2*(k-1)))*1000000;
    return isfinite(result)? result : 0;
}

int main(){
    printf("Expression : ((-1)^{k+1})/(2 * k-1)\n");

    int maxValue = 1000000;
    struct summary sum;
    sum.normal = 0;
    sum.plus = 0;
    sum.substract = 0;
    sum.product = 0;
    sum.divide = 0;

    struct summaryCheck sumCheck;
    sumCheck.normal = 1;
    sumCheck.plus = 1;
    sumCheck.substract = 1;
    sumCheck.product = 1;
    sumCheck.divide = 1;

    int k;
    for(k = 2; k <= maxValue; k++){
        sum.normal += calculate((double)k);
        sum.divide += calculate((double)k/4);
        sum.substract += calculate((double)k-4);

        if(sumCheck.product == 1){
            double kM = (double)k*4;

            if(kM > maxValue){
                sumCheck.product = 0;
                printf("Stop multiply\n");
            }else{
                sum.product += calculate((double)k*4);
            }
        }

        if(sumCheck.plus == 1){
            double kP = (double)k+4;

            if(kP > maxValue){
                sumCheck.plus = 0;
                printf("Stop plus\n");
            }else{
                sum.plus += calculate((double)k+4);
            }
        }
    }

    printf("Sum of normal k:%f\n", sum.normal / 100000);
    printf("Sum of k for subtracted by 4:%f\n", sum.substract / 100000);
    printf("Sum of k for pulsed by 4:%f\n", sum.plus / 100000);
    printf("Sum of k for divided by 4:%f\n", sum.divide / 100000);
    printf("Sum of k for multiplied by 4:%f\n", sum.product / 100000);
    
    return 0;
}