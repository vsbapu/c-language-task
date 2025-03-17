#include<stdio.h>
int main(){
    float p,r,n;
    printf("enter price");
    scanf("%f",&p);
    printf("enter of interest");
    scanf("%f",&r);
    printf("enter time period");
    scanf("%f",&n);
    printf("simple interest is %f",(p*r*n)/100);
}
