#include<stdio.h>
int main(){
//    char ch;
//    for ( ch ='A'; ch <='Z'; ch++)
//    {
//         if (ch%4==1)
//         {
//             printf("%c",ch);                    
//         }       
//    }

    char a=97;
    do
    {
        if (a%4==1) 
        {
            printf("%c",a);
        }
         a++;        
    } while(a <= 'z');
    
}