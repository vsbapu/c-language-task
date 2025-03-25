#include<stdio.h>
int main(){ 
    int a;
    printf("ENter your marks::");
    scanf("%d",&a);
    char gradeinchar;

    (a>=92&&a<=100)? printf("grade is 'A'\n"), gradeinchar='A':
    (a >=80 && a <=90) ? printf("gread is 'B'\n"),gradeinchar='B':
    (a>=65  && a<=80)? printf("grade is 'C'\n"), gradeinchar='C':
    (a >=60 && a <=70) ? printf("gread is 'D'\n"),gradeinchar='D':
    (a>=45&&a<=55)? printf("grade is 'E'\n"), gradeinchar='E':
    (a >=40 )? printf("gread is 'F'\n"),gradeinchar='F':

    printf("please Enter your marks and valid range ");

    switch (gradeinchar)
    {
    case 'A':
        printf("Excellent work\n");
        break;
    case 'B':
        printf("well done\n");
        break;
    case 'C':
        printf("great work job\n");
        break;
    case 'D':
        printf("good work \n");
        break;
    case 'E':
        printf("your pass but you could do butter\n");
        break;
    case 'F':
        printf("Soory uou failed\n");
        break;        
    default:
        printf("plase valid range\n");
        break;
    }
    if (gradeinchar=='A'||gradeinchar=='B'||gradeinchar=='C'||gradeinchar=='D'||gradeinchar=='E'||gradeinchar=='F');
    {
        printf("congratulations you are eligible for next level");
    }
}
    
