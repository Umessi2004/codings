#include<stdio.h>
#include<stdlib.h>
int top=-1;
int size;
void PUSH(int stack[], int size, int val){
    if(top=size-1){
        printf("stack overflow\n");
        return;
    }
    else if(top=-1){
        stack[top++]=val;
        return;
    }
    else{
        for(int i=top+1; i>0; i--){
            stack[i]=stack[i-1];
        }
        stack[top]=val;
        top++;
        return;
    }
}
void traverse(int stack[]){
    
}
int main()
{
    printf("enter the size of the stack:");
    scanf("%d", &size);
    int stack[size];
    int ch, n;
    printf("stack operation:");
    while(1){
        printf("1.PUSH\n2.POP\n3.TRAVERSE\n");
        printf("enter the option you want:");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            printf("push opeeration:\n");
            printf("enter the element you want :");
            scanf("%d", &n);
            PUSH(stack, size, n);
            break;
            case 2:
            //POP(stack);
            break;
            case 3:
            //traverse(stack, size);
            break;
            default:
            printf("enter valid option\n");
        }
    }
    
    return 0;
}