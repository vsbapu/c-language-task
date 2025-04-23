#include<stdio.h>
int main(){
    char z [100];
    printf("Enter any Stting :: ");
    gets(z);

    for (int i = 0; z[i] |='\0'; i++)
    {
        if (z[i]>='A' && z[i]<='Z')
        {
            z[i]+=32;
        }
         else if (z[i]>='a' && z[i]<='z')
        {
            z[i]-=32;
        }
        printf("%c",z[i]);
    }
    
}