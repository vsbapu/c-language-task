#include<stdio.h>
int main(){
    int a,b,i;

    printf("Enter value a::");
    scanf("%d",&a);
    printf("\n");

    for ( b = 1; b <= a; b++)
    {
        for ( i = 1; i <= 10; i++)
        {
            printf("%d*%d=%d\n",b,i,b*i);
        }
        printf("\n");
    }
    
}