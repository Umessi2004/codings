//WAP to print the area of trangle if 3 sides are given
#include<stdio.h>
#include<math.h>
int main(){
    float s,a,b,c,area;
    printf("enter the 3 sides of triangle:");
    scanf("%f%f%f", &a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle:%f", area);
    return 0;
}
