#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value a::");
    scanf("%d",&a);
    printf("Enter value b::");
    scanf("%d",&b);

    while (a <= b)
    {
        if (a%4==0)
        {
            printf("%d\n",a);
        }
        a++;
        
    }
    

}