#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    //Functions for inputs:

void standing_bicycle_crunch(FILE *file){
    printf("-> Standing bicycle crunch:\n");
    char *set[10];
    char *quantity[100];

    printf("set: ");
    scanf("%s",set);
    printf("Quantity: ");
    scanf("%s",quantity);

    fprintf(file, "standing bicycle crunch\t\t%s\t   %s\n",&set,&quantity);
    fclose(file);

}

void mountain_climber(FILE *file)
{
    printf("-> Mountain climber:\n");
    char *set[10];
    char *quantity[100];

    printf("set: ");
    scanf("%s",set);
    printf("Quantity: ");
    scanf("%s",quantity);

    fprintf(file, "Mountain climber\t\t%s\t   %s\n",&set,&quantity);
    fclose(file);

}

void abdominal_crunches(FILE *file)
{
    printf("-> Abdominal crunches\n");
    char *set[10];
    char *quantity[100];

    printf("set: ");
    scanf("%s",set);
    printf("Quantity: ");
    scanf("%s",quantity);

    fprintf(file, "Abdominal Crunches\t\t%s\t   %s\n",&set,&quantity);
    fclose(file);

}

void butt_bridge(FILE *file)
{
    printf("-> Butt bridge:\n");
    char *set[10];
    char *quantity[100];

    printf("set: ");
    scanf("%s",set);
    printf("Quantity: ");
    scanf("%s",quantity);

    fprintf(file, "Butt bridge\t\t\t%s\t   %s\n",&set,&quantity);
    fclose(file);

}

void push_ups(FILE *file)
{
    printf("-> Push Ups:\n");
    char *set[10];
    char *quantity[100];

    printf("set: ");
    scanf("%s",set);
    printf("Quantity: ");
    scanf("%s",quantity);

    fprintf(file, "Push ups\t\t\t%s\t   %s\n",&set,&quantity);
    fclose(file);

}

void plank(FILE *file)
{

    printf("-> Plank:\n");
    char *set[10];
    char *quantity[100];

    printf("set: ");
    scanf("%s",set);
    printf("Time (in second): ");
    scanf("%s",quantity);

    fprintf(file, "Plank\t\t\t\t%s\t   %s seconds\n",&set,&quantity);
    fclose(file);

}

void cobra_stretch(FILE *file)
{
    printf("-> Cobra stretch\n");
    char *set[10];
    char *quantity[100];

    printf("set: ");
    scanf("%s",set);
    printf("Time (in second): ");
    scanf("%s",quantity);

    fprintf(file, "Cobra stretch\t\t\t%s\t   %s seconds\n",&set,&quantity);
    fclose(file);

}

    //Functions for printing:

void print_standind_b_crunch(){
    FILE *file;
    file = fopen("Data","r");

    char ch[50];
    char set[10];
    char quantity[50];

    while(!feof(file)){
        fscanf(file, "%s", ch);
        if(strcmp("standing",ch) == 0){
            printf("standing bicycle crunch\t\t");
            fscanf(file, " %s %s \t%s\t   %s",ch, ch, set, quantity);
            printf(" %s\t  ",set);
            printf("%s\n",quantity);
        }
    }
fclose(file);
}

void print_mountain_climber()
{
    FILE *file;
    file = fopen("Data","r");

    char ch[50];
    char set[10];
    char quantity[50];

    while(!feof(file)){
        fscanf(file, "%s", ch);
        if(strcmp("Mountain",ch) == 0){
            printf("Mountain climber\t\t");
            fscanf(file, " %s \t\t%s\t   %s",ch,set, quantity);
            printf(" %s\t  ",set);
            printf("%s\n",quantity);
        }
    }
fclose(file);
}

void print_abdominal_crunch()
{
    FILE *file;
    file = fopen("Data","r");

    char ch[50];
    char set[10];
    char quantity[50];

    while(!feof(file)){
        fscanf(file, "%s", ch);
        if(strcmp("Abdominal",ch) == 0){
            printf("Abdominal Crunches\t\t");
            fscanf(file, " %s \t\t%s\t   %s",ch,set, quantity);
            printf(" %s\t  ",set);
            printf("%s\n",quantity);
        }
    }
fclose(file);
}

void print_butt_bridge()
{
    FILE *file;
    file = fopen("Data","r");

    char ch[50];
    char set[10];
    char quantity[50];

    while(!feof(file)){
        fscanf(file, "%s", ch);
        if(strcmp("Butt",ch) == 0){
            printf("Butt bridge\t\t\t");
            fscanf(file, " %s \t\t%s\t   %s",ch,set, quantity);
            printf(" %s\t  ",set);
            printf("%s\n",quantity);
        }
    }
fclose(file);
}

void print_push_ups()
{
    FILE *file;
    file = fopen("Data","r");

    char ch[50];
    char set[10];
    char quantity[50];

    while(!feof(file)){
        fscanf(file, "%s", ch);
        if(strcmp("Push",ch) == 0){
            printf("Push ups\t\t\t");
            fscanf(file, " %s \t\t%s\t   %s",ch,set, quantity);
            printf(" %s\t  ",set);
            printf("%s\n",quantity);
        }
    }
fclose(file);
}

void print_plank(){
    FILE *file;
    file = fopen("Data","r");

    char ch[50];
    char set[10];
    char quantity[50];

    while(!feof(file)){
        fscanf(file, "%s", ch);
        if(strcmp("Plank",ch) == 0){
            printf("Plank\t\t\t\t");
            fscanf(file, "%s\t   %s",set, quantity);
            printf(" %s\t  ",set);
            printf("%s seconds\n",quantity);
        }
    }
fclose(file);

}

void print_cobra_stretch()
{
    FILE *file;
    file = fopen("Data","r");

    char ch[50];
    char set[10];
    char quantity[50];

    while(!feof(file)){
        fscanf(file, "%s", ch);
        if(strcmp("Cobra",ch) == 0){
            printf("Cobra stretch\t\t\t");
            fscanf(file, " %s \t\t%s\t   %s",ch,set, quantity);
            printf(" %s\t  ",set);
            printf("%s seconds\n",quantity);
        }
    }
fclose(file);
}


int main()
{
    FILE *register_file;
    register_file = fopen("Register" , "a");
    int v;
    printf("Menu:\n1) Log in\n2) Register\nWhat do you want: ");
    scanf("%d",&v);
    if(v == 2){
        char name[20];
        printf("Note:\n1. Do not use any uppercase in your nick name\n2. Password have to be under 9 characters\n");
        printf("Nick name: ");
        scanf("%s",name);
        fputs(name,register_file);
        fputs("\t||\t",register_file);

        char pass[10];
        printf("Password: ");
        scanf("%s",pass);
        fputs(pass,register_file);
        fputs("\n",register_file);
        printf("Congratulation you are registered now!\n");
        printf("Press enter to exit\n");
        char c,b;
        scanf("%c%c",&c,&b);
        if(b == 10){
            printf("");
        }
        return 1;
    }
    else if(v == 1){
        printf("Note:\n1. Enter the same name as you registered.\n2. Do not use any uppercase in your user name\n");
        char name1[20];
        char pass1[10];
        register_file = fopen("Register" , "r");
        printf("User name: ");
        scanf("%s",name1);

        char chack[20];
        char password[10];
        while(!feof(register_file)){
            fscanf(register_file , "%s" , chack);
            if(strcmp(name1,chack) == 0){
                fscanf(register_file, "\t||\t%s", password);
                printf("Password: ");
                scanf("%s",pass1);
                if(strcmp(pass1,password) == 0){
                    printf("Login successful\n");
                    break;
                }
                else{
                    printf("ops! Wrong password");
                    fclose(register_file);
                    printf("Press enter to exit\n");
                    char c,b;
                    scanf("%c%c",&c,&b);
                    if(b == 10){
                        printf("");
                    }
                    return 1;
                }
            }
        }
        if(strcmp(name1,chack) != 0){
            printf("Ops! You are not registered.Do registration first\n");
            printf("Press enter to exit\n");
            char c,b;
            scanf("%c%c",&c,&b);
            if(b == 10){
                printf("");
            }
            return 1;
        }
    }

    int want;
    printf("Do you want to see your previous exercise list\n1) Yes\n2) No\nWhat do you want: ");
    scanf("%d",&want);
    if(want == 1){
        FILE *file;
        file = fopen("Data","r");

         printf("\nExercise:			Set:	Quantity:\n-------------		       -----   -----------\n");
            //Calling functions:
         print_standind_b_crunch();
         print_mountain_climber();
         print_abdominal_crunch();
         print_butt_bridge();
         print_push_ups();
         print_plank();
         print_cobra_stretch();
         fclose(file);
    }
    else{
        printf("Let's make your today's list: \n");
        FILE *file;

            //Calling functions:
        file = fopen("Data","w");
        standing_bicycle_crunch(file);
        file = fopen("Data","a");
        mountain_climber(file);
        file = fopen("Data","a");
        abdominal_crunches(file);
        file = fopen("Data","a");
        butt_bridge(file);
        file = fopen("Data","a");
        push_ups(file);
        file = fopen("Data","a");
        plank(file);
        file = fopen("Data","a");
        cobra_stretch(file);

        fclose(file);
    }

printf("\nThank You\n");
printf("Press enter to exit\n");
char c,b;
scanf("%c%c",&c,&b);
if(b == 10){
    printf("");
}

fclose(register_file);
return 0;
}
