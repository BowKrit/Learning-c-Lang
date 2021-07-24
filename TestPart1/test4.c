#include <stdio.h>

int summary(int num)
{
    int i, sum = 0;
    for (i = 1; i <= num; ++i)
    {

        sum += i;
    }
    return sum;
}

int multiple(int num)
{
    int i, sum = 0;
    for (i = 1; i <= num; ++i)
    {
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }

    }
    return sum;
}

int main()
{

    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Sum = %d\n", summary(num));
    printf("Sum = %d", multiple(num));

    return 0;
}