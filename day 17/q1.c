#include<stdio.h>
int main(){
    int i,j,spce;

    for ( i = 1; i <=5; i++)
    {
        for (spce = 4; spce >=i; spce --)
        {
            printf(" ");
        }
        for (j = i; j >=1; j--)
        {
           printf("%d",j);
        }
        printf("\n");
        
    }
    
}