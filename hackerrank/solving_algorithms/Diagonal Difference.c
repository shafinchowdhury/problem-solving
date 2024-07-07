#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int i = 0, j = 0;
    int sum_1 = 0;
    int sum_2 = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }
        //SUM 01:
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i == j){
                sum_1 = sum_1 + arr[i][j];
            }
        }
    }
        //SUM 02:
    int minus = n-1;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(j == minus){
                sum_2 = sum_2 + arr[i][j];
                minus--;
            }
        }
    }
        //PRINTING:
    if(sum_1 > sum_2){
        printf("%d",sum_1-sum_2);
    }
    else{
        printf("%d",sum_2-sum_1);
    }
return 0;
}
