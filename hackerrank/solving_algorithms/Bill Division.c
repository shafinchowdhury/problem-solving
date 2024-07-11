#include<stdio.h>

int main()
{
    int n, position;
    scanf("%d%d",&n,&position);
    int sum = 0;
    int charge;
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
        if(i != position){
            sum  = sum + arr[i];
        }
    }
    scanf("%d",&charge);
    if(charge == sum){
        printf("Bon Appetit");
    }
    else if( charge > (sum/2)){
        printf("%d",charge - (sum/2));
    }
    else if((sum/2) > charge){
        printf("%d",(sum/2) - charge);
    }
return 0;
}
