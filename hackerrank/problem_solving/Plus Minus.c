#include <stdio.h>

void print(double num){
    printf("%0.6lf\n",num);
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    double plus = 0, minus = 0, zero = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        if(arr[i] < 0){
            minus++;
        }
        else if(arr[i] == 0){
            zero++;
        }
        else{
            plus++;
        }
    }

    print(plus/n);
    print(minus/n);
    print(zero/n);



return 0;
}
