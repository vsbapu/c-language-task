#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter value a::");
    scanf("%d",&a);
    printf("Enter value b::");
    scanf("%d",&b);
    printf("Enter value c::");
    scanf("%d",&c);

    if (a < b )
    {
        if (a < c)
        {
            printf("a is minimum ");
        }
        else
        {
            printf("c is minimum");
        }
           
    }
    else
    {
        if (b < c )
        {
            printf("b is minimum");
        }
        else
        {
            printf("c is minimum");
        }
        
    }
    

}