#include<stdio.h>

int sum(int arr[],int n);


int main(){
    int n,j;
printf("Enter number of elements\n");
    scanf("%d",&n);

    int a[n];


    for (int i = 0; i < n; i++)
    {
        printf("Enter value of element %d\n",i+1);
        scanf("%d",&a[i]);
    }

j =sum(a,n);

printf("the sum of array is %d",j);

return 0;
}


int sum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
