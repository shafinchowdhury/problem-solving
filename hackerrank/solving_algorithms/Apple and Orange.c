#include<stdio.h>

int main()
{
    int s,t;
    scanf("%d%d",&s,&t);

    int location_apple, location_orange;
    scanf("%d%d",&location_apple,&location_orange);

    int apples, oranges;
    scanf("%d%d",&apples,&oranges);

    int point_apple, point_orange;
    int cheack_apple = 0;
    int count_apple = 0;

    for(int i = 0; i < apples; i++){
        scanf("%d",&point_apple);
        cheack_apple = location_apple + point_apple;
        if(cheack_apple >= s & cheack_apple <= t){
            count_apple++;
        }
    }

    int cheack_orange = 0;
    int count_orange = 0;
    for(int i = 0; i < oranges; i++){
        scanf("%d",&point_orange);
        cheack_orange = location_orange + point_orange;
        if(cheack_orange >= s & cheack_orange <= t){
            count_orange++;
        }
    }

    printf("%d\n",count_apple);
    printf("%d",count_orange);

return 0;
}
