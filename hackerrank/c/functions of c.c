#include<stdio.h>

int main( )
{
    int a, b, c, d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    int list[4]={a,b,c,d};

    int i = 0, max = 0 , again = 0;
    for(i ; i <= 3; i++){
        if(max < list[i]){
            max = list[i];
        }
    }
    printf("%d",max)

return 0;
}
