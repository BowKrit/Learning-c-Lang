#include <stdio.h>
#include <string.h>

int main()
{

    char name[20];
    printf("Enter your name : ");
    scanf("%s", name);

    if (strcmp(name, "Bob") == 0 || strcmp(name, "Alice") == 0){
        printf("Hello %s", name);
    }
    else{
        printf("Who are you %s ?", name);
    }

    return 0;
}