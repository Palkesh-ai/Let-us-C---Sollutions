#include <stdio.h>

int main(){

float bmi,H,W;

printf("***Enter Height in Meters***\n");
scanf("%f",&H);

printf("***Enter Weight in Kilograms***\n");
scanf("%f",&W);

bmi=W/(H*H);
printf("Your BMI is %0.3f\n",bmi);

if(bmi<15){
    printf("Starvation\n");
}
else if(bmi>=15.1 && bmi<=17.5){
    printf("Anorexic\n");
}
else if(bmi>=17.6 && bmi<=18.5){
    printf("Underweight\n");
}
else if(bmi>=18.6 && bmi<=24.9){
    printf("Ideal\n");
}
else if(bmi>=25 && bmi<=25.9){
    printf("OverWeight\n");
}
else if(bmi>=30 && bmi<=30.9){
    printf("Obese\n");
}
else if(bmi>=40){
    printf("Morbidly Obese\n");
}

return 0;
}
