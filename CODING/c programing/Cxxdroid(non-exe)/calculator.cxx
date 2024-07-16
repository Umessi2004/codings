#include<stdio.h>
int main(){
    int a,b;
    char n;
    printf("operators: + - / * %% \n");
    printf("ENTER THE expression::");
    scanf("%d%c%d",&a,&n, &b);
    //printf("ENTER THE OPERATION:");
    // scanf("%c", &n);
    switch(n){
        case '+':
            printf("%d", a+b);
            break;
        case '-':
            printf("%d", a-b);
            break;
        case '%':
            printf("%d", a%b);
            break;
        case '/':
            printf("%d", a/b);
            break;
        case '*':
            printf("%d", a*b);
            break;
        default:
            printf("INVALID OPERATION\n");
            break;
    }
    return 0;
}