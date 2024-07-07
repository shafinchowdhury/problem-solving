#include<stdio.h>
#include<string.h>
int main()
{
    int hour, minute, second, colon;
    char day_or_night[4];
    scanf("%d%c%d%c%d%s",&hour,&colon,&minute,&colon,&second,day_or_night);

    char pm[3] = "PM";
    char am[3] = "AM";
    if(strcmp(day_or_night,pm) == 0){
        if(hour == 12){
            hour == hour;
        }
        else{
            hour = hour + 12;
        }
    }
    if(strcmp(day_or_night,am) == 0 & hour == 12){
        hour = hour - 12;
    }


    if(minute <=9 & second <=9 & hour <= 9 & strcmp(day_or_night,am) == 0){
            printf("0%d:0%d:0%d",hour,minute,second);
    }
    else if(minute <=9 & second <=9){
            printf("%d:0%d:0%d",hour,minute,second);
    }
    else if(hour <=9 & second <=9){
            printf("0%d:%d:0%d",hour,minute,second);
    }
    else if(hour <=9 & minute <=9){
            printf("0%d:0%d:%d",hour,minute,second);
    }
    else if(hour <= 9){
        printf("0%d:%d:%d",hour,minute,second);
    }
    else if(minute <= 9){
        printf("%d:0%d:%d",hour,minute,second);
    }
    else if(second <=9){
        printf("%d:%d:0%d",hour,minute,second);
    }
    else{
        printf("%d:%d:%d",hour,minute,second);
    }

return 0;
}
