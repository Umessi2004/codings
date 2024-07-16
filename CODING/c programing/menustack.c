#include<stdio.h>
#include<stdlib.h>
#define size 100
int stack_arr[size];
int top=-1;

void push(int n){
    if (top==size-1){
        printf("stack overflow\n");
        exit(1);
    }
    top=top+1;
    stack_arr[top]=n;
}
int pop(){
    if (top==-1){
        printf("stack underflow\n");
        return -1;
    }
    int res=stack_arr[top];
    top--;
    return res;
}
void traverse(){
    if (top==-1){
        printf("no element is present\n");
        exit(1);
    }
    for (int i=top; i>=0; i--){
        printf("%d ", stack_arr[i]);
    }
    printf("\n");
}
int main()
{
    int ch, n, res;
    printf("STACK OPERATION\n");
    while (ch!=4){
        printf("1.push\n2.pop\n3.traverse\n4.exit\n");
        printf("enter the option:");
        scanf("%d", &ch);
        switch(ch){
            case 1:
                printf("enter the element:");
                scanf("%d", &n);
                push(n);
                break;
            case 2:
                res=pop();
                if (res==-1){
                    break;
                }
                printf("the popped element is: %d\n", res);
                break;
            case 3:
            
                printf("the stack is:\n");
                traverse();
                break;
            case 4:
                printf("exiting operation!!");
                break;
            default:
                printf("enter valid option:");
                scanf("%d", &ch);
        }
    }
    return 0;
}