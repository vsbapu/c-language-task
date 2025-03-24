#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter value a");
    scanf("%d",&a);
    printf("Enter value b");
    scanf("%d",&b);
    printf("Enter value c");
    scanf("%d",&c);
    printf("Enter value d");
    scanf("%d",&d);

    if ( a > b )
    {
        if ( a > c)
        {
            if ( a > d)
            {
                printf("a is maximum");
            }
            else
            {
                printf("d is maximum");
            }
           
        }
        else{
            if (c > d) 
            {
                printf("c is maximum");
                
            }
            else
            {
                printf("d is maximum");
            }
        }
        
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("b is maximum");
            }
            else
            {
                printf("d is maximum");
            }
        }
        else
        {
            if (c > d)
            {
                printf("c is maximaum");
            }
            else
            {
                printf("d is maximum");
            }   
        }   
    }
}