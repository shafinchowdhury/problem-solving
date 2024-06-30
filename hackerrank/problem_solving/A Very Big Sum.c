#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    double arr[n];
    double sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%lf",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%0.0lf",sum);
return 0;
}
