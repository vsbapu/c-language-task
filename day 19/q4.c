#include<stdio.h>
int main(){
    int i,j,space;

    for ( i = 5; i >=1; i--)
    {
        for (space = 4; space >=i; space--)
        {
            printf("-");
        }
        
       for ( j = 1; j <=i; j++)
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