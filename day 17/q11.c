#include<stdio.h>
int main(){
    int i,j,k,spce;

    for ( i = 1; i <=5; i++)
    {
        for ( spce = 4; spce >=i; spce--)
        {
            printf(" ");
        }
        for ( j = 1; j <=i; j++)
        {
            printf("*");
        }
        for ( k = i-1; k >=1; k--)
        {
            printf("*");
        }
        printf("\n");    
    }
    
}