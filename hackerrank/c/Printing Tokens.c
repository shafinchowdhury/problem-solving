#include <stdio.h>
#include<string.h>

int main()
{
    char sen[10000];
    scanf("%[^\n]s",sen);
    char *token = strtok(sen, " ");
    while(token != NULL){
        printf("%s\n",token);
        token = strtok(NULL, " ");
    }

return 0;
}


