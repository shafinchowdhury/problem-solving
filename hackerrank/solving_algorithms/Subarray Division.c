#include<stdio.h>

int main()
{
    int n, day, month, count = 0;
    scanf("%d",&n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&day,&month);

     if(month == 1){
        for(int i = 0; i < n; i++){
            if(arr[i] == day){
                count = 1;
            }
        }
     }
     else{
        int m = month;
        int sum = 0;
        int limit = n-month;
        for(int i = 0; i < limit+1; i++){
            month = month+i;
            for(int j = i; j < month; j++){
                sum+=arr[j];
            }
                if(sum == day){
                    count++;
            }
            sum = 0;
            month = m;
        }
    }

    printf("%d",count);
return 0;
}
