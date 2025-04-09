#include<stdio.h>
int main(){
    int i,j,spce;

    for ( i = 5; i >=1; i--)
    {
        for (spce =i; spce >1; spce--)
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