#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value a::");
    scanf("%d",&a);
    

    (a >=92 && a <=100) ? printf("gread is A\n") ,b='A':
    (a >=80 && a <=90) ? printf("gread is B\n") ,b='B':
    (a >=70 && a <=80) ? printf("gread is c\n") ,b='C':
    (a >=60 && a <=70) ? printf("gread is d\n") ,b='D':
    (a >=50 && a <=60) ? printf("gread is e\n") ,b='E':
    (a >=20 && a <=40) ? printf("gread is f\n") ,b='F':

    printf("please Enter your marks and valid range ");

    switch (b)
    {
    case 'A':
        printf("very very good\n");
        break;
    case 'B':
        printf(" very good\n");
        break;

    case 'C':
        printf(" very nice \n");
        break; 

    case 'D':
        printf(" good work\n");
        break; 

    case 'E':
        printf("your pass but next time is very batter\n");
        break;

     case 'F':
        printf("your fail batter luck next time\n");
        break;
    default:
        printf("plase valid range\n");
        break;
    }

    if (b=='A'|| b=='B'||b=='C' || b =='D' ||b=='E'||b=='f' )
    {
       printf("congratulations you are eligible for next level");
    }
    
}