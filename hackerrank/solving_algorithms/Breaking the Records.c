// problem = https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true

#include<stdio.h>

int main()
{
    int matches;
    scanf("%d",&matches);
    int score[matches];
    int i = 0;
    for(int i = 0; i < matches; i++){
        scanf("%d",&score[i]);
        }
    int max = 0;
    int min = 0;
    int current_max = score[i];
    int current_min = score[i];
    for(int i = 0; i < matches; i++){
        if(i >= 1){
            if(current_max < score[i]){
                current_max = score[i];
                max++;
            }
            else if(current_min > score[i]){
                current_min = score[i];
                min++;
            }
        }
    }
    printf("%d ",max);
    printf("%d",min);

return 0;
}
