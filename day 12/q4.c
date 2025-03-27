#include<stdio.h>
int main(){
    int a=1,b=-1,c,i;

    for ( i = 1; i <= 10; i++)
    {
        c=a+b; 
        printf("%d\n",c);    
        b=a;
        a=c;    
    }
    
}