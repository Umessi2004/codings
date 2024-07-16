//circular queue
#include<stdio.h>
#include<stdlib.h>
#define max 6w
int queue[max];
int front=-1;
int rear=-1;
int dequeue(){
    int x=queue[front];
    if (front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
    return x;
}
void enqueue(int n){
    rear++;
    queue[rear]=n;
}
void display(){
    for (int i=front; i<=rear; i++){
        printf("%d ",  queue[i]);
    }
    printf("\n");
}
int main()
{
    int ch, ele;
    printf("queue operation\n");
    while(1){
        printf("1.Enqueue\n2.Dequeue\n3.Traverse\n4.exit\n");
        printf("enter your option:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                if (rear==max-1){
                    printf("queue is full\n");
                    break;
                }
                else{
                    if (front==-1){
                        front++;
                    }
                    printf("insert an element:");
                    scanf("%d", &ele);
                    enqueue(ele);
                    break;
                }
            case 2:
                if (front==-1){
                    printf("queue is empty\n");
                    break;
                }
                else{
                    printf("the deleted element is:%d", dequeue());
                    break;
                }
            case 3:
                if (front==-1){
                    printf("the queue is empty\n");
                    break;
                }
                else{
                    printf("the queue is:");
                    display();
                    break;
                }
            case 4:
                printf("exiting operaation");
                exit(1);
                break;
            default:
                printf("WRONG OPTION!!!");
                //printf("enter again:");
                //scanf("%d", &ch);
        }
        printf("\n");    }
    return 0;
}