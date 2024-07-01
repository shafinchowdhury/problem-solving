#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int nums[12];
    int a = 40;
    for(int i = 0; i < 13;  i++){
        nums[i] = a;
        a = a+5;
    }

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 13; j++){
            if(nums[j] - arr[i] == 2){
                arr[i] = nums[j];
            }
            if(nums[j] - arr[i] == 1){
                arr[i] = nums[j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d\n",arr[i]);
    }

return 0;
}
