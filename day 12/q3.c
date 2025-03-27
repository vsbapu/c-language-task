#include<stdio.h>
int main(){
   int a,b=1;
   printf("Enter value a::");
   scanf("%d",&a);

   do
   {
    if (b%2==0)
    {
        printf("%d\n",b);
    }
    b++;
    
   } while (a >=b );
   
}