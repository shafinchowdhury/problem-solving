#include <stdio.h>


int main ()
{
    int size, rotation;
    scanf("%d%d",&size, &rotation);

    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = rotation; i < size; i++){
        printf("%d ",arr[i]);
    }
    for(int i = 0; i < rotation; i++){
        printf("%d ",arr[i]);
    }
return 0;
}
