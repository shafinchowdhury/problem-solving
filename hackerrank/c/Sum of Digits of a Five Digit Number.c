
#include <stdio.h>

int main ()
{
    int num, sum = 0, div;
    scanf("%d",&num);

    for(int i = 1; i <= 5; i++){
        div = num % 10; // div = remainder
        sum += div;
        num = num/10;
    }

    printf("%d",sum);
return 0;
}
