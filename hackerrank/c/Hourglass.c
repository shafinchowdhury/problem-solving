#include <stdio.h>

int main ()
{
    int pattren[6][6];

        // taking input:
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            scanf("%d",&pattren[i][j]);
        }
    }

        // variables:
    int array_of_sum[16];
    int i,j,max = -1000;

            // doing the sum and finding max
        for(i = 0; i < 4; i++){
            for(j = 0; j < 4; j++){
                int line_1 = pattren[i][j] + pattren[i][j+1] + pattren[i][j+2];
                int line_2 = pattren[i+1][j+1];
                int line_3 = pattren[i+2][j] + pattren[i+2][j+1] + pattren[i+2][j+2];

                array_of_sum[i] = line_1 + line_2 + line_3;
                if(array_of_sum[i] > max){
                    max = array_of_sum[i];
            }
            }
        }

        printf("%d",max);



return 0;
}

