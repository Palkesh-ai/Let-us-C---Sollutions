#include <stdio.h>

int main(){

int X,Y;

printf("**Enter any yera**");
scanf("%d",&Y);

X=Y%400;

if(X==0);
printf("It is a leap year");

else
printf("It is not a leap year");


return 0;
}
