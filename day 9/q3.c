#include<stdio.h>
int main(){

  int a,b,c;
    printf("Enter value a::");
    scanf("%d",&a);
    printf("Enter value b::");
    scanf("%d",&b);
    printf("Enter value c::");
    scanf("%d",&c);
  (a < b) ?((a<c)?printf("a is minimum"):printf("c is minimum")):(b < c) ?printf("b is minimum"):printf("c is minimum");
  
}