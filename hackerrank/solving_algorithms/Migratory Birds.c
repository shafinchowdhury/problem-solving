#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int birds_id[n];
    int counts[n];
    int birds[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&birds_id[i]);
    }

    int count = 0;
    int most;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                if(birds_id[i] == birds_id[j]){
                    printf("%d and %d\n",birds_id[i],birds_id[j]);
                    // printf("%d\n",count);
                    most = birds_id[j];
                    count++;
                    birds[i] = most;
                }
            }
        }
        count = 0;

    }

    for(int i = 0; i < n; i++){
        printf("%d ",birds[i]);
    }


return 0;
}
