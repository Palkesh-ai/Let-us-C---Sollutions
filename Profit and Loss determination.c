#include <stdio.h>
int main()[
 
 float cp,sp,profit,loss;
 
 scanf("%f%f",&cp,&sp);
 
 profit=sp-cp;
 loss=cp-sp;
 
 if(sp>cp);
     printf("Profit%f",profit);
 
 else 
     if(sp==cp);
     printf("Neither profit nor Loss%f",loss);
 
  
 else
     if(sp<cp);
     printf("Loss");
 
 
 return 0;

]

