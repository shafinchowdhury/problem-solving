#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",a+b);
    if(a>b){
        printf("%d",a-b);
    }
    else if (b>a){
        printf("%d",b-a);
    }

return 0;
}
