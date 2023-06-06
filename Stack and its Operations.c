
#include <stdio.h>
#include <stdlib.h>

// Maximum number of elements in the stack
#define MAX_SIZE 100

// Stack structure
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stack Overflow. Cannot push element %d.\n", item);
        return;
    }

    stack->items[++stack->top] = item;
    printf("Pushed element %d onto the stack.\n", item);
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow. Cannot pop element from an empty stack.\n");
        return -1;
    }

    int item = stack->items[stack->top--];
    printf("Popped element %d from the stack.\n", item);
    return item;
}

// Function to get the top element of the stack without removing it
int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty. Cannot peek.\n");
        return -1;
    }

    return stack->items[stack->top];
}

int main() {
    struct Stack stack;
    initialize(&stack);

    // Push elements onto the stack
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Pop elements from the stack
    pop(&stack);
    pop(&stack);

    // Get the top element of the stack
    int topElement = peek(&stack);
    if (topElement != -1) {
        printf("Top element of the stack: %d\n", topElement);
    }

    return 0;
}
