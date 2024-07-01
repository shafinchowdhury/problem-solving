#include<stdio.h>

int main()
{
    int arr[5];
    long long int total_sum = 0;
    long long int sum[5];


    for(int i = 0; i < 5; i++){
        scanf("%lld",&arr[i]);
        total_sum = total_sum + arr[i];
    }

    for(int i = 0; i < 5; i++){
        sum[i] = total_sum - arr[i];
    }

    int i = 0;
        //MINIMUM:
    long long int minimum = sum[i];
    for(int i = 0; i < 5; i++){
        if(sum[i] <= minimum){
            minimum = sum[i];
        }
    }
    printf("%lld ",minimum);

        // MAXIMUM:
    long long int maximum = sum[i];
    for(int i = 0; i < 5; i++){
        if(sum[i] >= maximum){
            maximum = sum[i];
        }
    }
    printf("%lld",maximum);

return 0;
}
