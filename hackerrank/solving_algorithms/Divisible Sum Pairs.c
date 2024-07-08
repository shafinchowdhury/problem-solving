// problem = https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true
#include<stdio.h>

int main()
{
    int n, k, count = 0;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j <n; j++){
            if(i != j){
                if((arr[i]+arr[j]) % k == 0){
                        count++;
                }
            }
        }
    }
    printf("%d",count/2);
return 0;
}
