#include <stdio.h>

int main()
{
        // Variables:
    int n,m;
    scanf("%d%d",&n,&m);
    int arr01[n];
    int arr02[m];
    int count = 0;
    int multiply = 1;
    int yes = 0;

        //Inputs:
    for(int i = 0; i < n; i++){
        scanf("%d",&arr01[i]);
        multiply = multiply * arr01[i];
    }
    for(int i = 0; i < m; i++){
        scanf("%d",&arr02[i]);
    }

        //Finding the minimum in arr_01;
    int min = arr01[0];
    for(int i = 0; i < n; i++){
        if(arr01[i] < min){
            min = arr01[i];
        }
    }

        //Finding The maximum in arr02
    int max = arr02[0];
    for(int i = 0; i < m; i++){
        if(arr02[i] > max){
            max = arr02[i];
        }
    }

        //Calculations:
    for(int i = min; i <= max; i++){
        if((i % multiply) == 0){
            for(int j = 0; j < n; j++){
                if(i % arr01[j] == 0){
                    yes = 1;
                }
                else{
                    yes = 0;
                }
            }
            if(yes == 1){
                for(int k = 0; k < m; k++){
                    if(i % arr02[k] == 0){
                    yes = 1;
                    }
                    else{
                        yes = 0;
                    }
                }
                if(yes == 1){
                count++;
            }
            }
        }
    }
        // Print:
    printf("%d",count);


return 0;
}
