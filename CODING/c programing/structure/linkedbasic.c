#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traverse(struct node * ptr){
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    }

}
int main()
{
    struct node * head=(struct node *)malloc(sizeof(struct node));
    struct node * second=(struct node *)malloc(sizeof(struct node));
    struct node * third=(struct node*)malloc(sizeof(struct node));
    //allocating memory in heap in a linked list
    head->data=72489; 
    head->next=second;
    
    second->data=43782;
    second->next=third;

    third->data=2740;
    third->next=NULL;
    traverse(head);
    return 0;
}