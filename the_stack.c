// C program for array implementation of stack
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// A structure to represent a stack
struct Stack {
    int top;
    unsigned capicity;
    int *arr;
};

typedef struct Stack theStack;

// function to create a stack of given capacity. It initializes size of
// stack as 0
theStack *creat_Stack(unsigned capacity) {
    theStack *stack = (theStack *) malloc(sizeof(theStack));

    stack->capicity = capacity;
    stack->top = -1;
    stack->arr = (int *) malloc(stack->capicity * sizeof(int));

    return stack;
}

// Stack is full when top is equal to the last index
int isFull(theStack *stack) {
    return stack->top == stack->capicity - 1;
}

// Stack is empty when top is equal to -1

int isEmpty(theStack *stack) {
    return stack->top == -1;
}


// Function to add an item to stack.  It increases top by 1
void push(theStack *stack, int item) {
    if (isFull)
        return;
    stack->arr[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}

// Function to remove an item from stack.  It decreases top by 1
int pop(theStack *stack) {
    if (isEmpty)
        return INT_MIN;
    return stack->arr[stack->top--];
}

// Driver program to test above functions
int main() {
    theStack *stack = creat_Stack(100);

    push(stack, 10);
    push(stack, 20);
    push(stack, 60);

    printf("%d popped from stack\n", pop(stack));

    return 0;
}

/*
-2147483648 popped from stack
*/