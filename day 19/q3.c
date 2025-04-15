#include<stdio.h>
int main(){
    int i,j,space;

    for ( i =5; i >=1; i--)
    {
        for (space = i; space >1; space--)
        {
            printf(" ");
        }
        
        for (j = i; j <=5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
}