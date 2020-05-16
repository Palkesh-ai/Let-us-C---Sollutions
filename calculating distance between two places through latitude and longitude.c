#include<stdio.h>
#include<math.h>

int main()
{
    float L1,L2,G1,G2,D;
    
    printf("Enter the latitude of cities L1 and L2 in degrees");
    scanf("%f%f",&L1,&L2);
    
    printf("Enter the longitude of cities G1 and G2 in degrees");
    scanf("%f%f",&G1,&G2);
    
    D=3963acos(sinL1sinL2+cosL1cosL2*cos(G2G1));
    
    printf("Distance between two cities is %f",D):
    
    return 0;
    
}
