#include<stdio.h>
#include<math.h>

int main()
{
    float wcf,t,v;
    
    printf("***Enter the tempeteture of air***");
    scanf("%f",&t);
    
    printf("***Enter the wind velocity***");
    scanf("%f",&v);
    
    
    wcf=35.74+0.6215t+(0.4275t-35.75)*pow(v,0.16);
    
    printf("The wind chill factor is %f",wcf);
    
    return 0;


}
