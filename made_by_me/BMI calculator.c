#include<stdio.h>

int main()
{
    printf("BMI Calculator:\n");

    float age;
    printf("Age: ");
    scanf("%f",&age);
    while(age <= 0){
        printf("Please enter a valid age: ");
        scanf("%f",&age);
        if(age > 0){
            printf("Now continue\n");
            printf("\n");
            printf("Age = %0.1f Years\n",age);
        }
    }
    float height_feet;
    float height_inch;
    printf("Height: Feet->");
    scanf("%f",&height_feet);
    if (height_feet <= 0){
        printf("Invalid height\nContinue again\n");
        return 0;
    }
    printf("        Inch->");
    scanf("%f",&height_inch);
    if (height_inch <= 0){
        printf("Invalid height\nContinue again\n");
        return 0;
    }
    float feet = height_feet * 0.3048;
    float inch = height_inch * 0.0254;
    float height = feet+inch;

    float weight;
    printf("Weight (kg) : ");
    scanf("%f",&weight);
    while(weight <= 0){
        printf("Please enter a valid weight: ");
        scanf("%f",&weight);
    }

    float bmi;
    bmi = weight/(height * height);

    printf("Your Calculation is ready:\n");
    printf("BMI = %0.3f\n",bmi);

    float gain = (18.5 * (height*height)) - weight;
    float lose = weight - (25.0 *(height*height));
    int limit_1 = (18.5 *(height*height));
    int limit_2 = (25.0 *(height*height));
    int avarage = (limit_1 + limit_2)/2;

    printf("Condition: ");
    if(bmi < 18.5){
        printf("Underweight\n");
        printf("You should gain at lest %0.1f kg weight\n",gain);
        if(avarage != weight){
            printf("But better to maintain around %d kgs\n",avarage);
        }
    }
    else if(bmi >= 18.5 & bmi <= 25){
        printf("Healthy Weight\n");
        printf("Just maintain your weight from %d to %d . But better to maintain around %d kgs\n",limit_1, limit_2,avarage);
    }
    else if(bmi > 25.0 & bmi <= 30){
        printf("Overweight\n");
        printf("You should lose at lest %0.1f kg weight\n",lose);
        if(avarage != weight){
            printf("But better to maintain around %d kgs\n",avarage);
        }
    }
    else if(bmi > 30 & bmi <= 39.9){
        printf("Obesity\n");
        printf("You should lose at lest %0.1f kg weight\n",lose);
        if(avarage != weight){
            printf("But better to maintain around %d kgs\n",avarage);
        }
    }
    else{
        printf("Obesity and over risk level\n");
        printf("Please visit a doctor\n");
    }

    printf("Thank You\n");

return 0;
}
