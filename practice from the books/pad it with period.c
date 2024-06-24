// Question : write a program that inputs string from the user. if the string is less then 20 chars then pad it with zero.

#include<stdio.h>
#include<string.h>

int main ()
{
    char str[20];
    scanf("%s",str);

    int limit = 20 - lenght;
    printf("%s",str);
    if(lenght < 20){
        for(int i = 0; i < limit; i++){
            printf("0");  // pad with zero in free memories
        }
    }

return 0;
}
