#include<stdio.h>
int main(){
    int i,j,spce;

    for ( i = 5; i >=1; i--)
    {
        for ( spce = 5; spce >i; spce--)
        {
            printf(" ");
        }
        for ( j = i; j >=1; j--)
        {
            if (j%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            
        }
            printf("\n");
        
        
    }
    
}
