#include<stdio.h>

int Fact(int n){
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*Fact(n-1);
    }

}

int main(){
    int n;
    printf("Enter value for Factorial");
    scanf("%d",&n);
    printf("Factorial is %d\n",Fact(n));
    return 0;
}
