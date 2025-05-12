#include<stdio.h>

int y(int c[],int d){

    int sum=0;
    for (int i = 0; i < d; i++)
    {
        sum=sum+c[i];
    }
    printf("%d",sum);
    
}

int main(){
    int a;

    printf("Enter value ::");
    scanf("%d",&a);

    int x[a];

    for (int i = 0; i <a; i++)
    {
        printf("enter Array element's %d::",i);
        scanf("%d",&x[i]);      
    }

    y(x,a);
    
}