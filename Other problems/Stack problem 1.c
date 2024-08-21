#include <stdio.h>
#include <stdlib.h>

int count = 0;

void array_input(char *array){
    int i = 0;
    while(1){
        scanf("%c",&array[i]);
        if(array[i] == 10){
            break;
        }
        i++;
        count++;
    }
}

void array_print(char *array)
{
    for(int i = 0; i < count; i++){
        printf("%c ",array[i]);
    }
}

void array_cheack(char *array)
{
    int cheack = 0;
    for(int i = 0; i < count; i= i+2){
        if(array[i] == '('){
            if(array[i+1] != ')'){
                printf("False");
                cheack++;
                break;
            }
        }
            // For 2nd
        if(array[i] == '{'){
            if(array[i+1] != '}'){
                printf("False");
                cheack++;
                break;
            }
        }
            //For 3rd
        if(array[i] == '['){
            if(array[i+1] != ']'){
                printf("False");
                cheack++;
                break;
            }
        }

        if(array[i] == ')' || array[i] == '}' || array[i] == ']'){
            printf("False");
            cheack++;
            break;
        }

    }

    if(array[0] == 10){
        printf("");
    }
    else if(cheack != 1){
        printf("True");
    }
}

int main()
{
    char *array = (char*) malloc (100 * sizeof(char));

    printf("Don't use and space or '' in your input\nPress enter to stop\nEnter your inputs: ");
    array_input(array);
    array_cheack(array);

free(array);
return 0;
}
