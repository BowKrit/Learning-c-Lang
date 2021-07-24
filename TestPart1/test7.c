#include <stdio.h>

int isPrimeNumber(int n)
{
    // Find all prime numbers e.g. 2, 3, 5, 7, 11, 13, 17, 19...
    int flag = 0;

    int i;
    // check number is prime number
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            // printf("Number is not prime\n");
            flag = 1;
            break;
        }
    }
    // if (flag == 0)
    // {
    //     printf("Number is prime\n");
    // }
    return flag;
}

int main()
{
    int num, i;
    printf("The number: ");
    scanf("%d", &num);

    printf("List of Prime numbers\n%d\n", 2);
    for (i = 3; i <= num; i += 2) {
        if (isPrimeNumber(i) == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
} 