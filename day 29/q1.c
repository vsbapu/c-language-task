#include<stdio.h>
int sum(){
    int a,sum=0;
    printf("Enter array of size::");
    scanf("%d",&a);

    int x[a];

    for (int i = 0; i <a; i++)
    {
        printf("Enter array elements %d=",i+0);
        scanf("%d",&x[i]); 
        sum=sum+x[i];       
    }
    printf("the sum of array %d",sum);

}
int main(){
    sum();
}