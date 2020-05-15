#include<stdio.h>

int main()
{

    int num,a,b,c,d,e,sum;

    printf("Enter a five digit number");
    scanf("%d",&num);

    a=num/10000;
    b=(num/1000)%10;
    c=(num/100)%10;
    d=(num/10)%10;
    e=num%10;
    
    sum=a+b+c+d+e;
    
    printf("The sum of every digit of the number is %d",sum);
    
    return 0;
}
