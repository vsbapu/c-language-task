#include<stdio.h>
int main(){
    int i,j,spce;

    for ( i = 1; i <=5; i++)
    {
        for ( spce =i; spce >=2; spce--)
        {
            printf(" ");
        }
        for ( j = 5; j >=i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
}