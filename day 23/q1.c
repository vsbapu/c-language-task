#include<stdio.h>
int main(){

    char a[100];
    printf("Enter sting  value ::");
    gets(a);

    for (int i = 0; a[i]|='\0'; i++)
    {
        if (a[i]>='a' && a[i]<='z')
        {
            a[i]-=32;        
        }
        
    printf("%c",a[i]);
    }
    
}