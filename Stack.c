/**
 * 
 * @file Stack.c
 * @author Max Base (maxbasecode@gmail.com)
 * @brief Stack Implementation in C
 * @version 0.1
 * @date 2022-12-02
 * @copyright Copyright (c) 2022
 * 
 */

#include "Stack.h"

/**
 * @brief Create a new stack
 * @param size
 * @return Stack* 
 */
Stack* newStack(int size)
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->size = size;
    stack->top = -1;
    stack->items = (int*)malloc(stack->size * sizeof(int));
    return stack;
}

/**
 * @brief Check if the stack is full
 * @param stack
 * @return true 
 * @return false 
 */
bool isFull(Stack* stack)
{
    return stack->top == stack->size - 1;
}

/**
 * @brief Check if the stack is empty
 * @param stack
 * @return true 
 * @return false 
 */
bool isEmpty(Stack* stack)
{
    return stack->top == -1;
}

/**
 * @brief Push an item to stack
 * @param stack
 * @param item
 */
void push(Stack* stack, int item)
{
    if (stack->size == 0) {
        printf("Stack not initialized!\n");
        return;
    }
    else if (isFull(stack)) {
        printf("Stack is full!\n");
        return;
    }
    stack->items[++stack->top] = item;
    printf("Pushed %d to stack\n", item);
}

/**
 * @brief Pop an item from stack
 * @param stack
 * @return int 
 */
int pop(Stack* stack)
{
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return INT_MIN;
    }
    return stack->items[stack->top--];
}

/**
 * @brief Peek the top item from stack
 * @param stack
 * @return int 
 */
int peek(Stack* stack)
{
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return INT_MIN;
    }
    return stack->items[stack->top];
}

/**
 * @brief Print the stack
 * @param stack
 */
void printStack(Stack* stack)
{
    printf("Stack: ");
    for (int i = 0; i <= stack->top; i++) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

/**
 * @brief Destroy the stack
 * @param stack
 */
void destroyStack(Stack* stack)
{
    stack->top = -1;
    stack->size = 0;
    free(stack->items);
    // free(stack);
}

/**
 * @brief Convert the stack to string
 * @param stack
 * @return char* 
 */
char* stackToString(Stack* stack)
{
    if (stack->size == 0) {
        return "Stack not initialized!";
    }
    else if (isEmpty(stack)) {
        return "Stack is empty!";
    }

    char* str = (char*)malloc(100 * sizeof(char));
    sprintf(str, "Stack: ");
    for (int i = 0; i <= stack->top; i++) {
        sprintf(str, "%s%d ", str, stack->items[i]);
    }
    return str;
}

/**
 * @brief Resize the stack
 * @param stack
 * @param size
 * @return Stack* 
 */
Stack* resizeStack(Stack* stack, int size)
{
    stack->size = size;
    stack->items = (int*)realloc(stack->items, stack->size * sizeof(int));
    return stack;
}
