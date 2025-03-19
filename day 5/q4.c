#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter value a");
    scanf("%d",&a);
    printf("enter value b");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("affteer value of swapping");
    printf("\na=%d \n b=%d", a,b);
     
}