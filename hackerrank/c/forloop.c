#include <stdio.h>

int main( )
{
    char *name[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    if(a <= 9){
        if(b < 9){
            for(int i = 0; i <= b; i++){
                if(a == i){
                    printf("%s\n",name[a]);
                    a++;
                }
            }
        }
        else if(b > 9){
            for(int i = 0; i <= 9; i++){
                if(a == i){
                    printf("%s\n",name[a]);
                    a++;
                }
            }
        }
    }
    if(b > 9){
        if(a<9){
            for(int i = 10; i <= b; i++){
                if(i % 2 == 0){
                    printf("even\n");
                }
                else{
                    printf("odd\n");
                }
            }
        }
        else if(a>9){
            for(int i = a; i <= b; i++){
                if(i % 2 == 0){
                    printf("even\n");
                }
                else{
                    printf("odd\n");
                }
            }
        }
    }
return 0;
}
