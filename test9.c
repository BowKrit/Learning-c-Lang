#include <stdio.h>
#include <time.h>

int findLeapYear(int year)
{
    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                return 1;
            }
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}

int main()
{
    time_t seconds = time(NULL);
    struct tm* current_time = localtime(&seconds);
    
    int year = current_time -> tm_year + 1900;
    printf("This year is:%d\nThis year is %sleap year", year, findLeapYear(year) == 0 ? "not a " : "");
    printf("\n----------------------------------------------------------------------\n");

    int count = 0;
    do{
        if(findLeapYear(year) == 1){
            count++;
            printf("%d => %d\n", count, year);
        }
        year++;
    }while (count < 20);

    return 0;

}