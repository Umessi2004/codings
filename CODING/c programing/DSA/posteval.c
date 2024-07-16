#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

// Function to initialize the stack
void initialize(int *top) {
    *top = -1;
}

// Function to push an element onto the stack
void push(int stack[], int *top, int value) {
    if (*top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
    stack[++(*top)] = value;
}

// Function to pop an element from the stack
int pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack[(*top)--];
}

// Function to perform postfix evaluation
int evaluatePostfix(char *expression) {
    int stack[MAX_SIZE];
    int top;
    initialize(&top);
    
    for (int i = 0; expression[i] != '\0'; i++) {
        if (isdigit(expression[i])) {
            push(stack, &top, expression[i] - '0');
        } else {
            int operand2 = pop(stack, &top);
            int operand1 = pop(stack, &top);
            switch (expression[i]) {
                case '+':
                    push(stack, &top, operand1 + operand2);
                    break;
                case '-':
                    push(stack, &top, operand1 - operand2);
                    break;
                case '*':
                    push(stack, &top, operand1 * operand2);
                    break;
                case '/':
                    push(stack, &top, operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", expression[i]);
                    exit(EXIT_FAILURE);
            }
        }
    }
    return pop(stack, &top);
}

int main() {
    char expression[MAX_SIZE];
    printf("Enter the postfix expression: ");
    scanf("%s", expression);
    
    int result = evaluatePostfix(expression);
    printf("Result: %d\n", result);
    
    return 0;
}
