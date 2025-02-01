#include <stdio.h>
#include <stdlib.h>

typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

typedef struct {
    StackNode* top;
} Stack;

Stack* createStack() {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

void push(Stack* stack, int data) {
    StackNode* new_node = (StackNode*) malloc(sizeof(StackNode));
    new_node->data = data;
    new_node->next = stack->top;
    stack->top = new_node;
}

int pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is Empty!\n");
        return -1;
    }
    int data = stack->top->data;
    StackNode* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

void display(Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is Empty!\n");
        return;
    }
    printf("Stack Contents:\n");
    StackNode* current = stack->top;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
}

int main() {
    Stack* stack = createStack();

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);

    display(stack);

    printf("Popped: %d\n", pop(stack));
    printf("Popped: %d\n", pop(stack));

    display(stack);

    return 0;
}
