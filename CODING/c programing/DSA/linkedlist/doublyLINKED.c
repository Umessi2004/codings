#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* prev, next;
};
struct node* start=NULL;
struct node* insertATbeg(struct node* start, int val){
    struct node* p;//=(struct node*)malloc(sizeof(struct node));
    p->data=val;
    p->prev=NULL;
    p->next=NULL;
    if (start==NULL){
        start=p;
    }
    else{
        p->next=start;
        start->pre=
        start=p;
    }
    return start;
}
struct node* insertATend(struct node* start, int val){
    struct node* p;//=(struct node*)malloc(sizeof(struct node));
    p->data=val;
    p->prev=NULL;
    p->next=NULL;
    if(start==NULL){
        start=p;
    }
    else{
        start->next=p;
    }
    return start;
}
struct node* insertATany(struct node* start, int val, int pos){
    struct node* p;//=(struct node*)malloc(sizeof(struct node));
    p->data=val;
    p->prev=NULL;
    p->next=NULL;
    int i=0;
    if (start==NULL){
        printf("only one element is present\n");
        start=p;
    }
    else if(pos==0){
        insertATbeg(start, val);
    }
    else{
        struct node* temp=start;
        struct node* temp2;
        while(i<=pos){
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=p;
        p->prev=temp;
        p->next=temp2;temp->prev=p;
    }
    return start;
}
int main()
{

    
    return 0;
}