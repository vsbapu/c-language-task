    #include<stdio.h>
    int a,b;
    int sub(){
        printf("Enter value a::");
        scanf("%d",&a);
        printf("Enter value b::");
        scanf("%d",&b);
        printf("%d-%d=%d",a,b,a-b);
    }
    int sum(){
        printf("Enter value a::");
        scanf("%d",&a);
        printf("Enter value b::");
        scanf("%d",&b);
        printf("%d+%d =%d",a,b,a+b);
    }
    int mul(){
        printf("Enter value a::");
        scanf("%d",&a);
        printf("Enter value b::");
        scanf("%d",&b);
        printf("%d*%d=%d",a,b,a*b);
    }
    int div(){
        printf("Enter value a::");
        scanf("%d",&a);
        printf("Enter value b::");
        scanf("%d",&b);
        printf("%d/%d=%d",a,b,a/b);
    }
    int mod(){
        printf("Enter value a::");
        scanf("%d",&a);
        printf("Enter value b::");
        scanf("%d",&b);
        printf("%d  %d=%d",a,b,a%b);
    }

    int main(){
        int ch,ex=1;
        printf("Press 1 for -\n");
        printf("Press 2 for +\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %\n");
        printf("Press 0 for exit");

        while (ex==1)
        {
            printf("\n\n Enter your choice::");
            scanf("%d",&ch);
            switch (ch)
            {
            case 0:
                ex=0;
                break;
            case 1:
                sub();
            break;
            case 2:
                sum();
            break;
            case 3:
                mul();
            break;
            case 4:
                div();
            break;
            case 5:
                mod();
            break;            
            default:
                printf("invild choice");
                break;
            }
        }
    }