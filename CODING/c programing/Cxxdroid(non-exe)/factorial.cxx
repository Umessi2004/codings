#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a and b:");
    scanf("%d %d", &a, &b);
    if (a>b){
        while( a%b!=0){
            c=a%b;
            a=b;b=c;
        }
        printf("hcf=%d", b);
    }
    return 0;
}