#include<stdio.h>
int main(){
    int a,sum=0,i;

    printf("Enter value a::");
    scanf("%d",&a);

    for (i = 0; i <= a; i++){
        sum=sum+i;
    }
    {
        printf("%d\n",sum);
    }

    
}