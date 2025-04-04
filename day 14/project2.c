#include<stdio.h>
int main(){
    int x,y,sum=0;
    printf("Enter value x::");
    scanf("%d",&x);

    while (x != 0)
    {
        y=x%10; 
        x=x/10;
        sum=sum+y;
    }
    printf("%d",sum);
}