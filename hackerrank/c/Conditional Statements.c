#include <stdio.h>

int main( )
{
    char *name[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int number;
    scanf("%d",&number);

    for(int i = 0; i <= 9; i++){
            if(number ==  i){
                printf("%s\n",name[i]);
                break;
            }
            else if(number > 9){
                printf("Greater than 9");
                break;
            }
            else{
                continue;
            }
    }

return 0;
}
