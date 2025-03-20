#include<stdio.h>
int main(){
    int a;
    printf("enter value a::");
    scanf("%d",&a);

    if ( a < 0)
    {
        printf("this number is negatvie");
    }
    else if ( a > 0)
    {
        printf("this number is Positive");
    }

    else  
    {
       printf("This number is Neutral");
    }
    
    
    
}