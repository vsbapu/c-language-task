#include<stdio.h>
#include<string.h>
void str (char a[]){
    int len=0;
    for (int i = 0; a[i] |= '\0'; i++)
    {
        len++;
    }
    printf("%d",len);   
}
int main(){
    int x[50];
    printf("Enter any string::");
    gets(x);
    str(x);
}