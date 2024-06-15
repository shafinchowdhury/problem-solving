#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    int n_list;
    scanf("%d",&n_list);
    char string_list[n_list][30];
    for(int i = 0; i < n_list; i++){
        scanf("%s",string_list[i]);
    }

    int n_queris;
    scanf("%d",&n_queris);
    char quries[n_queris][30];
    for(int i = 0; i < n_queris; i++){
    scanf("%s",quries[i]);
    }

    int numbers[n_queris];

    for(int i = 0; i < n_queris; i++){
        numbers[i] = 0;
    }


    for(int i = 0; i < n_queris; i++){
        for(int j = 0; j < n_list; j++){
            if(strcmp(quries[i],string_list[j]) == 0){
                numbers[i]++;
            }
        }
    }

    for(int i = 0; i < n_queris; i++){
        printf("%d\n",numbers[i]);
    }

return 0;
}

