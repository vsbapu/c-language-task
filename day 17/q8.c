#include<stdio.h>
int main(){
    int i,j,spce,k,l,m,n,o;

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

    for ( m= 1; m <=5; m++)
    {
        for ( l = 1; l <=m; l++)
        {
            printf("%d",l);
        }
        for ( o = 5; o >m; o--)
        {
            printf("  ");
        }
        
        
        for ( n = m; n >=1 ; n--)
        {
            printf("%d",n);
        }   
        printf("\n");
        
    }
    
    
}