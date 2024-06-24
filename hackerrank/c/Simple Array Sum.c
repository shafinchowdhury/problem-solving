#include<stdio.h>

int main()
{
  int a[3] , b[3];
  for(int i = 0; i < 3; i++){
    scanf("%d",&a[i]);
  }
  for(int i = 0; i < 3; i++){
    scanf("%d",&b[i]);
  }

  int score_a = 0;
  int score_b = 0;
  for(int i = 0; i < 3; i++){
    if(a[i] > b[i]){
        score_a++;
    }
    else if(a[i] < b[i]){
        score_b++;
    }

  }

  printf("%d %d",score_a,score_b);
return 0;
}

