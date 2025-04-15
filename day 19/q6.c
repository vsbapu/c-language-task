#include<stdio.h>
int main(){
    int i,j,space,k;

    for ( i = 1; i <=5; i++)
    {
        for ( j =1; j <=i; j++)
        {
            printf("%d",j);
        }
        for (space = 4; space >=i ; space--)
        {
            printf("  ");
        }
        for (k = i; k >=1; k--)
        {
            printf("%d",k);
        }
        
        printf("\n");
        
    }
    
}