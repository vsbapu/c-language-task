#include<stdio.h>
int main(){
    int a,i,sum=0;

    printf("Enter value a::");
    scanf("%d",&a);

    for ( i = 0; i <= a; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}