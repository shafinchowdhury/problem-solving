//problem : https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true

#include<stdio.h>

int main()
{
    int x1,x2;
    int v1,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);

    if(v2 > v1){
        printf("NO");
    }
    else if(v1 == v2){
        printf("NO");
    }
    else{
        for(int i = 0; i < 10000; i++){
            if(x1 == x2){
                printf("YES");
                break;
            }
            else if (x1 > x2){
                printf("NO");
                break;
            }
            x1 = x1 + v1;
            x2 = x2 + v2;
        }
    }

return 0;
}
