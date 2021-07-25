#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], checkPal[100];

    printf("Enter String : ");
    gets(str);

    strcpy(checkPal, str);
    strrev(checkPal);

    if(strcmp(str, checkPal) == 0){
        printf("This string is pallindrome\n");
    }
    else{
        printf("This string is not pallindrome\n");
    }

    return 0;

}