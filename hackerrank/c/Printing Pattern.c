// https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true

#include <stdio.h>

int main( )
{
    int num;
    scanf("%d",&num);
    int range = (num*2)-1;

    for(int i = 0; i < range; i++){
        for(int j = 0; j < range; j++){
            int r = num - i;
            int c = num - j;

            // case of row
            if(r>=1){
                r=r;
            }
            else{
                r = (i - num) + 2;
            }

            // case of column
            if(c>=1){
                c=c;
            }
            else{
                c = (j - num) + 2;
            }

            // printing
            int max = (r>c) ? (r):(c);
            printf("%d ",max);
            }
            printf("\n");
        }


return 0;
}
