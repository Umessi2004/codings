#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

// Function to check if stack is full
int isFull(int top) {
    return top == MAX_SIZE - 1;
}

// Function to check if stack is empty
int isEmpty(int top) {
    return top == -1;
}

// Function to push element into stack
void push(char stack[], int *top, char c) {
    if (isFull(*top)) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++(*top)] = c;
}

// Function to pop element from stack
char pop(char stack[], int *top) {
    if (isEmpty(*top)) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[(*top)--];
}

// Function to reverse a string using stack
void reverseString(char str[]) {
    char stack[MAX_SIZE];
    int top = -1;

    // Push characters of string onto stack
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        push(stack, &top, str[i]);
    }

    // Pop characters from stack and store them back into string
    for (int i = 0; i < len; i++) {
        str[i] = pop(stack, &top);
    }
}

int main() {
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Reverse the string
    reverseString(str);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
