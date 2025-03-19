#include<stdio.h>
int main(){
    float q1,s1,q2,s2;
    printf("enter Weight and No 1  of item");
    scanf("%f %f",&q1,&s1);
    printf("enter Weight and No 2  of item");
    scanf("%f %f",&q2,&s2);
    printf("Average Value %f",((q1*s1)+(q2*s2))/(s1+s2));
}
