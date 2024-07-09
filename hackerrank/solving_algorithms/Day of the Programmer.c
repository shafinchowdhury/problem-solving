//problem : https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true

#include<stdio.h>

int main()
{
    int year;
    scanf("%d",&year);

    if(year <= 1917){
        if((year % 4) == 0){
            printf("12.09.%d",year);
        }
        else if((year % 4) != 0){
            printf("13.09.%d",year);
        }
    }

    else if(year >= 1919){
        if((year % 400) == 0){
            printf("12.09.%d",year);
        }
        else if((year % 4) == 0 & (year % 100) != 0){
            printf("12.09.%d",year);
        }
        else if((year % 400) != 0){
            printf("13.09.%d",year);
        }
    }

    else if(year == 1918){
          printf("26.09.%d",year);
    }

return 0;
}
