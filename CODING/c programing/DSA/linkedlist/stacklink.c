#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top = NULL;
struct stack *PUSH(struct stack *top, int val)
{
    struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
    if (top == NULL)
    {
        temp->data = val;
        temp->next = NULL;
        top = temp;
        return temp;
    }
    else
    {
        temp->data = val;
        temp->next = top;
        top = temp;
    }
    return top;
}
void traverse(struct stack *top)
{
    struct stack *temp = top;
    while (temp!= NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void POP(struct stack* top){
    struct stack* temp=top;
    top=top->next;
    free(temp);
}
int main()
{
    int n, ch;
    printf("STACK OPERATION\n");
    while (1)
    {
        printf("1.push\n2.pop\n3.peek\n4.traverse\n5.exit\n");
        printf("ENTER THE OPERATTION: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter the element you want to insert:");
            scanf("%d", &n);
            top = PUSH(top, n);
            break;
        case 2:
            printf("popping operation: ");
            POP(top);
            break;
        case 3:
            printf("the top most element is: ");
            break;
        case 4:
            printf("THE STACK IS:\n");
            traverse(top);
            break;
        case 5:
            printf("exiting...\n");
            exit(1);
        default:
            printf("enter valid option\n");
        }
    }
    printf("\n");
    return 0;
}