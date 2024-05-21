#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[100000];
    scanf("%s",arr);
    int length = strlen(arr);

    int sum_0=0,sum_1=0,sum_2=0,sum_3=0,sum_4=0,sum_5=0,sum_6=0,sum_7=0,sum_8=0,sum_9=0;

    // Zero
    for(int i = 0; i <= length; i++){
        if(arr[i] == '0'){
            sum_0 += 1;
        }
        else{
            continue;
        }
    }


    // One
        for(int i = 0; i <= length; i++){
        if(arr[i] == '1'){
            sum_1 += 1;
        }
        else{
            continue;
        }
    }

    // Two
    for(int i = 0; i <= length; i++){
        if(arr[i] == '2'){
            sum_2 += 1;
        }
        else{
            continue;
        }
    }

    // Three
    for(int i = 0; i <= length; i++){
        if(arr[i] == '3'){
            sum_3 += 1;
        }
        else{
            continue;
        }
    }

    //Four
    for(int i = 0; i <= length; i++){
        if(arr[i] == '4'){
            sum_4 += 1;
        }
        else{
            continue;
        }
    }

    // Five
    for(int i = 0; i <= length; i++){
        if(arr[i] == '5'){
            sum_5 += 1;
        }
        else{
            continue;
        }
    }

    // six
        for(int i = 0; i <= length; i++){
        if(arr[i] == '6'){
            sum_6 += 1;
        }
        else{
            continue;
        }
    }

    //seven
        for(int i = 0; i <= length; i++){
        if(arr[i] == '7'){
            sum_7 += 1;
        }
        else{
            continue;
        }
    }

    //eight
        for(int i = 0; i <= length; i++){
        if(arr[i] == '8'){
           sum_8 += 1;
        }
        else{
            continue;
        }
    }

    //nine
        for(int i = 0; i <= length; i++){
        if(arr[i] == '9'){
            sum_9 += 1;
        }
        else{
            continue;
        }
    }


    printf("%d %d %d %d %d %d %d %d %d %d ",sum_0,sum_1,sum_2,sum_3,sum_4,sum_5,sum_6,sum_7,sum_8,sum_9);

return 0;
}

