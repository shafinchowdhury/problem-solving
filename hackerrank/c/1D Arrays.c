// problem url: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true

#include <stdio.h>

int main( )
{
    int how_many, sum = 0;
    scanf("%d",&how_many);
    int arr[how_many];
    for(int i = 0; i < how_many; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("%d",sum);

return 0;
}
