#include <stdio.h>

int main(){

int Sub1,Sub2,Sub3,Sub4,Sub5;
float AM,PER;
printf("Enter marks obtained in Subjects");

scanf("%d%d%d%d%d",&Sub1,&Sub2,&Sub3,&Sub4,&Sub5);

AM=(Sub1+Sub2+Sub3+Sub4+Sub5)/5;

  printf("%f Agrigate marks obtained in subjects is",AM);

  PER=(Sub1+Sub2+Sub3+Sub4+Sub5)/500*100;
  
printf("%f Total percentage obtained by student",PER);
 
return 0;

}
