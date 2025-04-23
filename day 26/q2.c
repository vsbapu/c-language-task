#include<stdio.h>
int main(){
    int a;
    printf("Enter value ::");
    scanf("%d",&a);

    if (a%3==0 && a%5==0)
    {
        printf("the number is divisible by both 3 & 5 %d",a);
    }
    else
    {
        printf("the number is  not divisible by both 3 & 5");
    }
    
    
}