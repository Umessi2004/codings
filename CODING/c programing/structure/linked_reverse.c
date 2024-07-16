#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void traverse(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
struct Node* reverse(struct Node* head){
    struct Node* nxt=NULL;
    struct Node* prev= NULL;
    while(head!=NULL){
        nxt=head->next;
        head->next=prev;
        prev=head;
        head=nxt;
    }
    head=prev;
    return head;
}
int main() {
    struct Node* head = NULL;
    int data;

    char choice;
    do {
        printf("Enter data to insert into the linked list: ");
        scanf("%d", &data);
        head = insertAtEnd(head, data);

        printf("Do you want to insert more elements? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Linked List: ");
    traverse(head);
    printf("\nreversed linked list:\n");
    head=reverse(head);
    traverse(head);
    printf("\n");

    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
