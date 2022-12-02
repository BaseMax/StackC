#include "Stack.h"

int main(int argc, char** argv)
{
    // Create a stack of capacity 5
    Stack* stack = newStack(5);

    // Push items to stack
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    push(stack, 4);
    push(stack, 5);

    push(stack, 100);

    // Check if stack is full
    if (isFull(stack)) {
        printf("Stack is full!\n");
    }

    // Print the stack
    printStack(stack);

    // Resize the stack
    stack = resizeStack(stack, 10);

    // Push an item to stack
    push(stack, 100);

    // Print the stack
    printStack(stack);

    // Pop items from stack
    pop(stack);
    pop(stack);

    // Convert the stack to string
    char* str = stackToString(stack);
    printf("%s\n", str);

    // Check if the stack is empty
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack is not empty!\n");
    }

    // Peek the top item from stack
    printf("Top item: %d\n", peek(stack));

    // Destroy the stack
    destroyStack(stack);

    printf("%s\n", stackToString(stack));

    // Check if the stack is empty
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack is not empty!\n");
    }

    return 0;
}
