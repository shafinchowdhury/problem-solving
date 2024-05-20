

#include <stdio.h>

int main( )
{
    int how_many;
    scanf("%d",&how_many);
    int arr[how_many];
    for(int i = 0; i < how_many; i++){
        scanf("%d",&arr[i]);
    }
    for(int i = how_many-1; i >= 0; i--){
        printf("%d ",arr[i]);
    }
return 0;
}
