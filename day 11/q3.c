#include<stdio.h>
int main(){
    int a=1,user;
    printf("Enter value ::");
    scanf("%d",&user);

    while (a <= user)
    {
        printf("%d\n",a);
        a++;
    }
    
}