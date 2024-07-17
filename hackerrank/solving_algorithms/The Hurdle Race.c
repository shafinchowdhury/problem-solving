#include<stdio.h>

int main()
{
    int n, num;
    int swith = 0;
    scanf("%d",&n);
    scanf("%d",&num);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        if(arr[i] > num){
            swith = 1;
        }
    }

    if(swith == 1){
        int max = arr[0];
        for(int i = 0; i < n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        printf("%d",max-num);
    }

    else if(swith == 0){
        printf("0");
    }

return 0;
}
