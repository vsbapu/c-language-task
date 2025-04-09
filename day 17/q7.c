#include<stdio.h>
int main(){
    int i,j,spce,k;


    for ( i = 5; i >=1; i--)
    {
        for ( j =1; j <=i; j++)
        {
            printf("%d",j);
        }
        for ( spce = 5; spce >i; spce--)
    {
        printf("  ");
    }
        for ( k = i; k >=1; k--)
        {
            printf("%d",k);
        }
        
        printf("\n");
    }
    
    
    
    
}