#include<stdio.h>

char* calculation(int n, int c1, int c2, int m){

    char *output[n];
    for(int i = 0; i < n; i++){
        if((m - c1) > (m - c2)){
            output[i] = "Cat A";
        }
        if((m - c2) > (m - c1)){
            output[i] = "Cat B";
        }
        if((m-c2) == (m - c1)){
            output[i] = "Mouse C";
        }
    }


    return output[n];
}

int main()
{
    int n;
    scanf("%d",&n);
    char *output[n];

    int cat_a , cat_b , mouse;
    for(int i = 1; i < n; i++){
        scanf("%d%d%d",&cat_a,&cat_b,&mouse);
        if(mouse > cat_a & mouse > cat_b){
            calculation(n,cat_a,cat_b,mouse);
        }

        if(mouse > cat_a & mouse < cat_b){
            calculation(n,cat_a,cat_b,mouse);
        }
    }

    for(int i = 0; i < n; i++){
        printf("%s\n",output[n]);
    }

return 0;
}
