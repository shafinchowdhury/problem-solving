
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int n , lines;
  scanf("%d%d",&n,&lines);

  int arr[lines][n];
  int index;
  int lastans = 0;

  for(int i = 0; i <= lines+1; i++){
    for(int j = 0; j < n; j++){
        scanf("%d",&arr[i][j]);
    }
  }

    for(int i = 0; i <= lines+1; i++){
    for(int j = 0; j < n; j++){
        index == (arr[i] ^ lastans) % n;
        arr

    }
  }


return 0;
}


