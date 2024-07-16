#include<stdio.h>
#include<math.h>
int main(){
    int bin,dec=0,c=0,rem;
    printf("enter a binary no.:");
    scanf("%d", &bin);
    while(bin!=0){
        rem=bin%10;
        dec=dec+rem*pow(2,c);
        c++;
        bin=bin/10;
    }printf("the decimal part is: %d\n", dec);
}
    