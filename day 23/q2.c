#include<stdio.h>
int main(){
    char x[100];
    printf("Enter value ::");
    gets(x);

    for (int i = 0; x[i] |='\0'; i++)
    {
        if (x[i]>='A' && x[i]<='Z');
        {
            x[i]+=32;
        }

        printf("%c",x[i]);
    }
    
}