#include<stdio.h>
int main(){

    char i,j,count='A';

    for ( i='A'; i<='E'; i++)
    {
        for ( j =i; j >='A'; j--)
        {
            printf("%c",j);
            
        }
        printf("\n");
        
    }
    
}