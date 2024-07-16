#include<stdio.h>
int main(){
    int d,b=0,i=1,rem;
    printf("enter a decimal num:");
    scanf("%d", &d);
    while (d!=0){
        rem=d%2;
        d/=2;
        b=b+rem*i;
        i=i*10;
    }printf("%d", b);
    return 0;
}
    
