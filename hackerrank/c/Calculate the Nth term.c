#include <stdio.h>

int main ()
{
    int limit, num_1, num_2, num_3, sum = 0;
    scanf("%d",&limit);
    scanf("%d",&num_1);
    scanf("%d",&num_2);
    scanf("%d",&num_3);
    int arr[limit+1];
    int a = 1;
    for(int i = 0; i <= 0; i++){
            arr[i]= num_1;
            arr[i+1] = num_2;
            arr[i+2] = num_3;
    }


    for(int i = 0; i <= limit-4; i++){
        sum = arr[i]+ arr[i+1]+ arr[i+2];
        arr[i+3] = sum;

    }
    printf("%d",sum);


return 0;
}

