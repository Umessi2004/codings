#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* insertAtbeg(struct node* head, int val){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    if(head==NULL){
        newnode->next=newnode;
        head=newnode;
    }
    else{
        struct node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    return head;
}
struct node* insertAtend(struct node* head, int val){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=head;
    if(head==NULL){
        newnode->next=newnode;
        head=newnode;
    }
    else{
        struct node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newnode;
        //newnode->next=head;
    }
    return head;
}
void traverse(struct node* head){
    struct node* temp=head;
    if (head!=NULL){
        do{
            printf("%d ", temp->data);
            temp=temp->next;
        }
        while(temp!=head);
    }
    else{
        printf("list is empty\n");
    }
}
int main()
{
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head=NULL;
    head=insertAtbeg(head, 5);
    head=insertAtbeg(head, 6);
    head=insertAtbeg(head, 7);
    head=insertAtbeg(head, 8);
    head=insertAtbeg(head, 9);
    traverse(head);
    head=insertAtend(head, 9);
    head=insertAtend(head, 9);
    head=insertAtend(head, 9);
    traverse(head);
    return 0;
}