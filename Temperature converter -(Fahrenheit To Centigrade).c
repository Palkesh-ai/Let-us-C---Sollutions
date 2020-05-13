#include <stdio.h>

int main()
{

/*F indicates Fehreneit and C indicates Centigrade*/

   float F,C;
   
   printf("*****Enter temperature in Fehrenheit*****");
   
   scanf("%f",F);
   
C=9/5*(F-32);
   
printf("Tempereture in Centigrade is %f",C);

      return 0;
}
