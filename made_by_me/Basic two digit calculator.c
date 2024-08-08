#include<stdio.h>
#include <string.h>

int main()
{
    printf("Welcome to basic two digit calculator\nEnter your calculation using space after each character for example (3 + 4)then press enter.\nYour calculation = ");
    int a;
    char b[3];
    int c;
    char plus[2] = "+";
    char minus[2] = "-";
    char multi[2] = "*";
    char divide[2] = "/";

    scanf("%d%s%d",&a,b,&c);
    if((strcmp(plus,b)) == 0){
        printf("Answer = %d",a+c);
    }
    else if((strcmp(minus,b)) == 0){
        printf("Answer = %d",a-c);
    }
    else if((strcmp(multi,b)) == 0){
        printf("Answer = %d",a*c);
    }
    else if((strcmp(divide,b)) == 0){
        printf("Answer = %d",a/c);
    }
printf("\nThank you");
return 0;
}
