
// https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true

#include <stdio.h>

int main( )
{
    int num;
    scanf("%d",&num);
    int range = (num*2)-1;
    int arr[range][range];


    for(int i = 0; i < range; i++){
        for(int j = 0; j < range; j++){
            int r = num - i;
            int c = num - j;
            if(r>=1){
                r=r;
            }
            else{
                r = (i - num) + 2;
            }
            if(c>=1){
                c=c;
            }
            else{
                c = (j - num) + 2;
            }
                int max = (r>c) ? (r):(c);
                printf("%d ",max);
            }
            printf("\n");
        }


return 0;
}
