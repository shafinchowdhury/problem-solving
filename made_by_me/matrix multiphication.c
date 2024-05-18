#include <stdio.h>

int main()
{
    int row_a, col_a, row_b, col_b;

    // input matrix a

    printf("row number: ");
    scanf("%d",&row_a);

    printf("column number: ");
    scanf("%d",&col_a);

    int mata[row_a][col_a];

    printf("Enter elements of Matrix A:\n ");
    for(int i = 0; i < row_a; i++){
        for(int j = 0; j < col_a; j++){
            scanf("%d",&mata[i][j]);
        }
        printf("\n");
    }


    // print matrix a

    printf("Matrix A is:\n");
    for(int s = 0; s < row_a; s++){
        for(int d = 0; d < col_a; d++){
            printf("%d ",mata[s][d]);
        }
        printf("\n");
    }

    // input matrix b

    printf("row number: ");
    scanf("%d",&row_b);

    printf("column number: ");
    scanf("%d",&col_b);
    int matb[row_b][col_b];

    printf("Enter elements of Matrix B:\n ");
        for(int i = 0; i < row_b; i++){
        for(int j = 0; j < col_b; j++){
            scanf("%d",&matb[i][j]);
        }
        printf("\n");
    }

    // print matrix b

    printf("Matrix B is:\n");
    for(int s = 0; s < row_b; s++){
        for(int d = 0; d < col_b; d++){
            printf("%d ",matb[s][d]);
        }
        printf("\n");
    }


    // main calculations:

    if(col_a == row_b){
        int mat_result[row_a][col_b];

    // Multiplication:

        for(int i = 0; i < row_a; i++){
            for( int j = 0; j < col_b; j++){
                int multi = 0;
                for(int k = 0; k < row_b; k++){
                    multi += mata[i][k]*matb[k][j];
                }
                mat_result[i][j] = multi;

            }
        }



        for(int i = 0; i < row_a; i++){
            for(int j = 0; j < col_b; j++){
                printf("%d ",mat_result[i][j]);
            }
            printf("\n");
        }
        }
    else{
        printf("Matrics can't be multiplied\n");
    }


return 0;
}
