#include<stdio.h>
typedef struct distance{
     int km, m;
}dist;
dist arr[3];
void input();
struct distance add_distance(struct distance,struct distance);
int main()
{
     input();
     printf("the added value is: ");
     arr[2]=add_distance(arr[0],arr[1]);
     printf("%d %d",arr[2].km,arr[2].m);
     return 0;
}
void input(){
     printf("the distance in km and in m:");
     scanf("%d %d",&arr[0].km,&arr[0].m);
     printf("ENTER 2ND DISTNACE IN KM AND M: ");
     scanf("%d %d",&arr[1].km,&arr[1].m);
}
struct distance add_distance(struct distance a,struct distance r){
         arr[2].km=a.km+r.km;
         arr[2].m=a.m+r.m;
         if(arr[2].m>1000){
              int x=arr[2].m/1000;
              arr[2].km+=x;
              arr[2].m=arr[2].m-(x*1000);
         }
         return arr[2];
}

         
         
          