#include<stdio.h>

int main()
{
   int a,b,c,area;
   
   printf("*****Enter length of three sides by every new line*****");
   printf("***Enter every number from a new line***");
   scanf("%d%d%d",&a,&b,&c);
   
   area=(a+b+c)/2;
   
   printf("The area of triangle is %d",area);
   
   return 0;

}
