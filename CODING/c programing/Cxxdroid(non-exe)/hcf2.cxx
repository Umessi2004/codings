#include<stdio.h>
int main(){
    int n1,n2; printf("enter n1 ,n2:");
    scanf("%d%d", &n1,&n2);
    while (n1!=n2){
        if (n1>n2){
            n1-=n2;
        }else{
            n2-=n1;
        }
    }printf("gcd of 2 noos:%d", n1);
    return 0;
}