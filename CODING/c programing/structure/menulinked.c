//insert at the beginning O(1) 
//insert at the end O(n)
//insert at the middle O(n)
//insert after a node O(1)
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *head;
struct node * insertatfirst(struct node *head, int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    //ptr=head;
    return ptr;
}
struct node * insertatindex(struct node *head, int data, int index){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct node* insertatend(struct node *head, int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
struct node* insertafter(struct node* head, struct node* prevnode, int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;
}
struct node* delete1stnode(struct node* head){
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node* deletebetween(struct node* head,int index){
    struct node* ptr=head;
    struct node* qtr=head->next;
    for (int i=0; i<index-1; i++){
        ptr=ptr->next;
        qtr=qtr->next;
    }
    ptr->next=qtr->next;
    free(qtr);
    return head;
}
struct node* deletelast(struct node* head){
    struct node* ptr=head;
    struct node* qtr=head->next;
    while(qtr->next!=NULL){
        ptr=ptr->next;
        qtr=qtr->next;
    }
    ptr->next=NULL;
    free(qtr);
    return head;
}
struct node* deleteval(struct node* head, int data){
    struct node* ptr=head;
    struct node* qtr=head->next;
    while(qtr->data!=data && qtr!=NULL){
        ptr=ptr->next;
        qtr=qtr->next;
    }
    if (qtr->data==data){
        ptr->next=qtr->next;
        free(qtr);
    }
    return head;
}
void traverse(struct node* ptr){
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    head=(struct node*)malloc(sizeof(struct node));
    struct node * second=(struct node *)malloc(sizeof(struct node));
    struct node * third=(struct node*)malloc(sizeof(struct node));
    struct node* fourth=(struct node*)malloc(sizeof(struct node));
    //allocating memory in heap in a linked list
    head->data=72; 
    head->next=second;

    second->data=42;
    second->next=third;

    third->data=27;
    third->next=fourth;
    
    fourth->data=100;
    fourth->next=NULL;
    traverse(head);
    struct node *p;
    printf("\n");
    //p=(struct node*)malloc(sizeof(struct node));
    //head=insertatindex(head,56,2); 
    //traverse(head);
    printf("after insertion\n");
    head=insertatend(head, 99);
    traverse(head);

    printf("\ninsertion in between:\n");
    head=insertafter(head, third, 444);
    traverse(head);
    
    printf("\nafter deletion:\n");
    head=delete1stnode(head);
    traverse(head);
    printf("\nafter deleting from an index:");
    head=deletebetween(head,1);
    traverse(head);
    printf("\ndeleting last element:\n");
    head=deletelast(head);
    traverse(head);
    printf("\ndeleting value:\n");
    head=deleteval(head, 444);
    traverse(head);
    return 0;
}