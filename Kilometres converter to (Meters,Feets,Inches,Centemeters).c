
#include <stdio.h>
int main()
{
float Km,M,F,I,C;

printf("Enter distance between two cities in Kilometres");
scanf("%f",Km);

M=Km*1000;
F=Km*3280.84;
I=Km*39370.1;
C=Km*100000;

printf("In Meters %f",M);
printf("In Feets %f",F);
printf("In Inches %f",I);
printf("In Centemeters %f",C);

return 0;
}
