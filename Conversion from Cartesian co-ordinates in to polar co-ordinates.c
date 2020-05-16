#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,r,φ;
    
    printf("Enter value of Cartesian co-ordinates");
    scanf?("%f%f",&x,&y);
    
    r=sqrt(x*x+y*y);
    φ=atan(y/x);
    
    printf("The values in polar Co-ordinates are %f",r,φ);
    
    return 0;
    
}
