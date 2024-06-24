// 1 2 3 4 5 6 7 8 9 10 2 2 12 3 4 123 12 5 2 3
#include <stdio.h>

int main()
{
    int nums [20], i=0;
    for (i; i < 20; i++){
        scanf("%d",&nums[i]);
    }

    for (i = 0; i < 20; i++){
        printf("%d ",nums[i]);
    }

    printf("\n");

    int max = 0, count, mode;

    for(i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            if(nums[i] == nums[j]){
                count++;
                max  = count;
            }
        }
        if(count > max){
            mode = nums[i];
        }
    }

    printf("\nmode= %d",mode);

return 0;
}
